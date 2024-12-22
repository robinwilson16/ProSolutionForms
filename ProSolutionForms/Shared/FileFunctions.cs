using Microsoft.AspNetCore.Components.Forms;
using ProSolutionForms.Models;
using ProSolutionForms.Pages;

namespace ProSolutionForms.Shared
{
    public class FileFunctions
    {
        public async static Task<SystemFileModel> LoadFileIntoModel(InputFileChangeEventArgs e, string? filePath)
        {
            SystemFileModel systemFile = new SystemFileModel();
            
            var file = e.File;
            long maxFileSize = 5 * 1024 * 1024; //5MB

            IList<string>? validFileTypes = GetValidFileTypes();

            IList<string>? validFileExtensions = GetValidFileExtensions();

            if (file == null)
            {
                systemFile.FileName = $"No file was specified or the file could not be accessed";
                systemFile.FileContentType = $"Error";
                return systemFile;
            }
            else if (file.Size > maxFileSize)
            {
                systemFile.FileName = $"This file is too large. Please choose a file under {maxFileSize}MB";
                systemFile.FileContentType = $"Error";
                return systemFile;
            }
            else if (!validFileTypes?.Contains(file.ContentType) ?? false)
            {
                systemFile.FileName = $"This type of file '{file.ContentType}' is not valid. Please select an image file, a PDF or a Word Document";
                systemFile.FileContentType = $"Error";
                return systemFile;
            }
            else if (!validFileExtensions?.Contains(GetFileExtension(file.Name) ?? "") ?? false)
            {
                systemFile.FileName = $"This file extension '{GetFileExtension(file.Name)}' is not valid. Please select an image file, a PDF or a Word Document";
                systemFile.FileContentType = $"Error";
                return systemFile;
            }
            else
            {
                try
                {
                    var imageThumbnail = e.File;
                    var buffer = new byte[file.Size];
                    var imageThumbnailBuffer = new byte[imageThumbnail.Size];
                    //await file.OpenReadStream().ReadAsync(buffer, 0, (int)file.Size); //More basic way to read file
                    await file.OpenReadStream(maxFileSize).ReadExactlyAsync(buffer.AsMemory(0, (int)file.Size)); //Better way to read file - max 5MB

                    if (file.ContentType.Contains("image"))
                    {
                        await imageThumbnail.RequestImageFileAsync(file.ContentType, 100, 100); //To Resize Image
                        await imageThumbnail.OpenReadStream(maxFileSize).ReadExactlyAsync(imageThumbnailBuffer.AsMemory(0, (int)file.Size)); //Better way to read file - max 5MB
                    }

                    systemFile = new SystemFileModel()
                    {
                        SystemFileID = 0,
                        FileContent = buffer,
                        ImageThumbnail = imageThumbnailBuffer,
                        FileName = file.Name,
                        FilePath = filePath,
                        FileSize = file.Size,
                        FileExtension = GetFileExtension(file.Name),
                        FileContentType = file.ContentType
                    };

                    file = null;
                    buffer = null;
                }
                catch (Exception ex)
                {
                    Console.WriteLine(ex.Message);
                    systemFile.FileName = $"An error occurred loading this file. Please try again or select a different file";
                    systemFile.FileContentType = $"Error";
                    systemFile.FileExtension = ex.Message;
                    return systemFile;
                }
            } 

            return systemFile;
        }

        public static string? GetFileExtension(string fileName)
        {
            return fileName.Substring(fileName.LastIndexOf('.')).ToLower() ?? "";
        }

        public static IList<string>? GetValidFileTypes()
        {
            IList<string> validFileTypes = new List<string>() {
                "image/png",
                "image/jpg",
                "image/jpeg",
                "image/gif",
                "image/bmp",
                "image/heic",
                "image/webp",
                "application/pdf",
                "application/msword",
                "application/vnd.openxmlformats-officedocument.wordprocessingml.document"
            };

            return validFileTypes;
        }

        public static string? GetValidFileTypesAsString()
        {
            IList<string>? validFileTypes = GetValidFileTypes();

            return string.Join(", ", validFileTypes ?? new List<string>());
        }

        public static IList<string>? GetValidFileExtensions()
        {
            IList<string> validFileExtensions = new List<string>() { 
                ".png", 
                ".jpg", 
                ".jpeg", 
                ".gif", 
                ".bmp", 
                ".heic", 
                ".webp", 
                ".pdf", 
                ".doc", 
                ".docx" 
            };

            return validFileExtensions;
        }

        public static string? GetValidFileExtensionsAsString()
        {
            IList<string>? validFileExtensions = GetValidFileExtensions();

            return string.Join(", ", validFileExtensions ?? new List<string>());
        }
    }
}
