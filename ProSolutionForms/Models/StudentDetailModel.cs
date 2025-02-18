using System.ComponentModel.DataAnnotations;
using System.ComponentModel.DataAnnotations.Schema;

namespace ProSolutionForms.Models
{
    [NotMapped]
    public class StudentDetailModel
    {
        [Key]
        public int? StudentDetailID { get; set; }
        public int StudentID { get; set; }
        public string? StudentRef { get; set; }
        public string? Surname { get; set; }
        public string? Forename { get; set; }
        public string? CollegeCode { get; set; }
        public string? CollegeName { get; set; }
        public string? DirectorateCode { get; set; }
        public string? DirectorateName { get; set; }
        public string? CAMCode { get; set; }
        public string? CAMName { get; set; }
        public string? DeptCode { get; set; }
        public string? DeptName { get; set; }
        public string? CourseCode { get; set; }
        public string? CourseTitle { get; set; }

        [Display(Name = "App Date")]
        public DateTime? ApplicationDate { get; set; }

        [Display(Name = "Med Comp")]
        public bool? MedicalFormCompleted { get; set; }

        [Display(Name = "Med Latest")]
        public DateTime? MedicalFormLatestSubmission { get; set; }

        [Display(Name = "Med Num Sub")]
        public int? MedicalFormNumberOfSubmissions { get; set; }

        [Display(Name = "Crim Comp")]
        public bool? CriminalConvictionFormCompleted { get; set; }

        [Display(Name = "Crim Latest")]
        public DateTime? CriminalConvictionFormLatestSubmission { get; set; }

        [Display(Name = "Crim Num Sub")]
        public int? CriminalConvictionFormNumberOfSubmissions { get; set; }

        [Display(Name = "Fund Comp")]
        public bool? FundingEligibilityFormCompleted { get; set; }

        [Display(Name = "Fund Latest")]
        public DateTime? FundingEligibilityFormLatestSubmission { get; set; }

        [Display(Name = "Fund Num Sub")]
        public int? FundingEligibilityFormNumberOfSubmissions { get; set; }
    }
}
