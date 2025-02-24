using System.ComponentModel.DataAnnotations;

namespace ProSolutionForms.Models
{
    public class SystemUserTokenModel
    {
        [Key]
        public string? BearerToken { get; set; }
    }
}
