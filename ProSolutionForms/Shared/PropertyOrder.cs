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
                    "MedicalFormCompleted",
                    "MedicalConsentFormReceivedCode",
                    "MedicalConsentFormReceivedName",
                    "TripPhotographicCosentObtainedCode",
                    "TripPhotographicCosentObtainedName",
                    "ApplicationDate",
                    "CourseCode",
                    "CourseTitle",
                    "MedicalFormHasDeclaredCriminalConvictions",
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
                    "FundingEligibilityFormNumberOfSubmissions",
                    "InterviewHEFormLatestSubmissionID",
                    "InterviewHEFormLatestSubmissionDate",
                    "InterviewHEFormNumberOfSubmissions",
                    "OfferHEFormLatestSubmissionID",
                    "OfferHEFormLatestSubmissionDate",
                    "OfferHEFormNumberOfSubmissions"
                }
            },
            {
                nameof(InterviewHEModel), new[]
                {
                    "CourseCode",
                    "MethodOfFunding",
                    "TuitionFeeAgreedTo",
                    "HasDifficultiesAndOrDisabilities",
                    "InterviewOutcome",
                    "CreatedBy",
                    "CreatedDate"
                }
            },
            {
                nameof(OfferHEModel), new[]
                {
                    "CourseCode",
                    "TuitionFee",
                    "MethodOfFundingID",
                    "HighestQualOnEntryLevelID",
                    "LastEducationalEstablishmentAttendedOfferID",
                    "CreatedBy",
                    "CreatedDate"
                }
            }
        };
    }
}
