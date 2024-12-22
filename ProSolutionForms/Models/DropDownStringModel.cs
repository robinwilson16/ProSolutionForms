using System.ComponentModel.DataAnnotations;
using System.ComponentModel.DataAnnotations.Schema;

namespace ProSolutionForms.Models
{
    [NotMapped]
    public class DropDownStringModel
    {
        [Key]
        public string? Code { get; set; }
        public string? Description { get; set; }
    }
}
