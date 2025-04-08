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
                    "CollegeCode",
                    "ApplicationSourceID",
                    "ApplicationSourceCode",
                    "ApplicationSourceName",
                    "ApplicationDate",
                    "CourseCode",
                    "CourseTitle",
                    "MedicalFormCompleted",
                    "MedicalConsentFormReceivedCode",
                    "MedicalConsentFormReceivedName",
                    "TripPhotographicCosentObtainedCode",
                    "TripPhotographicCosentObtainedName",
                    "CriminalConvictionFormCompleted",
                    "FundingEligibilityFormCompleted",
                    "StudentGUID",
                    "DirectorateCode",
                    "CAMCode",
                    "DeptCode",
                    "DeptName",
                    "MedicalFormLatestSubmissionID",
                    "MedicalFormLatestSubmissionDate",
                    "MedicalFormNumberOfSubmissions",
                    "MedicalFormCourseCode",
                    "CriminalConvictionFormLatestSubmissionID",
                    "CriminalConvictionFormLatestSubmissionDate",
                    "CriminalConvictionFormNumberOfSubmissions",
                    "FundingEligibilityFormLatestSubmissionID",
                    "FundingEligibilityFormLatestSubmissionDate",
                    "FundingEligibilityFormNumberOfSubmissions"
                }
            },
        };
    }
}
