using System.Text.Json.Serialization;

namespace ProSolutionForms.Models
{
    public class SystemUserGroupModel
    {
        public string? GroupID { get; set; }
        public string? GroupName { get; set; }

        [JsonIgnore]
        public virtual SystemUserModel? SystemUser { get; set; }
    }
}
