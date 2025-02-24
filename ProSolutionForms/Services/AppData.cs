using ProSolutionForms.Models;

namespace ProSolutionForms.Services
{
    public class AppData
    {
        private SystemUserModel? _currentUser;
        public SystemUserModel? CurrentUser
        {
            get
            {
                return _currentUser;
            }
            set
            {
                _currentUser = value;
                NotifyDataChanged();
            }
        }

        public AppData()
        {
            CurrentUser = new SystemUserModel();
        }

        public event Action? OnChange;

        private void NotifyDataChanged() => OnChange?.Invoke();
    }
}
