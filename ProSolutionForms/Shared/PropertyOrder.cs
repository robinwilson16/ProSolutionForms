using ProSolutionForms.Models;
using System.Collections.Generic;

namespace ProSolutionForms.Shared
{
    public static class PropertyOrder
    {
        public static readonly Dictionary<string, string[]> Orders = new Dictionary<string, string[]>
        {
            {
                nameof(StudentDetailModel), new[]
                {
                    "StudentRef",
                    "Surname",
                    "Forename",
                    "StudentGUID",
                    "CollegeCode",
                    "DirectorateCode",
                    "CAMCode",
                    "DeptCode",
                    "DeptName",
                    "CourseCode",
                    "CourseTitle",
                    "ApplicationDate",
                    "MedicalFormCompleted",
                    "MedicalFormLatestSubmissionID",
                    "MedicalFormLatestSubmissionDate",
                    "MedicalFormNumberOfSubmissions",
                    "CriminalConvictionFormCompleted",
                    "CriminalConvictionFormLatestSubmissionID",
                    "CriminalConvictionFormLatestSubmissionDate",
                    "CriminalConvictionFormNumberOfSubmissions",
                    "FundingEligibilityFormCompleted",
                    "FundingEligibilityFormLatestSubmissionID",
                    "FundingEligibilityFormLatestSubmissionDate",
                    "FundingEligibilityFormNumberOfSubmissions",
                    "MedicalConsentFormReceivedCode",
                    "MedicalConsentFormReceivedName",
                    "TripPhotographicCosentObtainedCode",
                    "TripPhotographicCosentObtainedName"
                }
            },
        };
    }
}
