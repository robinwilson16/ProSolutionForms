using System.ComponentModel.DataAnnotations;
using System.ComponentModel.DataAnnotations.Schema;

namespace ProSolutionForms.Models
{
    [NotMapped]
    public class DropDownIntModel
    {
        [Key]
        public int? Code { get; set; }
        public string? Description { get; set; }
    }
}
