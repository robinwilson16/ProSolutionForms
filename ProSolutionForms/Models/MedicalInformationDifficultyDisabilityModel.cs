using FluentValidation;
using ProSolutionForms.Pages;
using System.ComponentModel.DataAnnotations;
using System.Text.Json.Serialization;
using System.Text.RegularExpressions;

namespace ProSolutionForms.Models
{
    public class MedicalInformationDifficultyDisabilityModel
    {
        [Key]
        public int MedicalInformationDifficultyDisabilityID { get; set; }

        [JsonIgnore]
        public MedicalInformationModel? MedicalInformation { get; set; }
        public int? DisabilityCategoryID { get; set; }
        public string? Notes { get; set; }
        public bool? IsPrimary { get; set; }
        
        //Created and Updated
        public string? CreatedBy { get; set; }
        public DateTime? CreatedDate { get; set; }
        public string? LastUpdatedBy { get; set; }
        public DateTime? LastUpdatedDate { get; set; }
    }

    public class MedicalInformationDifficultyDisabilityValidator : AbstractValidator<MedicalInformationDifficultyDisabilityModel>
    {
        //Drop-down options
        public List<DropDownIntModel>? DisabilityCategories = new List<DropDownIntModel>();

        public MedicalInformationDifficultyDisabilityValidator()
        {
            //Get lists of drop-down options to be checked
            DisabilityCategories = MedicalInformation.GetDisabilityCategories();

            RuleFor(e => e.DisabilityCategoryID)
                .Must(f => DisabilityCategories.Any(c => c.Code == f))
                .WithMessage(e => $"The value you entered '{e.DisabilityCategoryID}' is not valid. Please enter or select a valid option from the list");
        }
    }

    public class MedicalInformationDifficultyDisabilityIsPrimaryErrorValidator : AbstractValidator<MedicalInformationDifficultyDisabilityModel>
    {
        public MedicalInformationDifficultyDisabilityIsPrimaryErrorValidator(int? numSelected)
        {
            RuleFor(e => e.IsPrimary)
                .Must(f => numSelected == 1)
                .WithMessage(e => $"Please ensure only one difficulty/disability is set as the primary");
        }
    }
}
