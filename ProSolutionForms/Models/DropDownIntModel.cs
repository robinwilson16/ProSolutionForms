﻿using System.ComponentModel.DataAnnotations;

namespace ProSolutionForms.Models
{
    public class DropDownIntModel
    {
        [Key]
        public int? Code { get; set; }
        public string? Description { get; set; }
    }
}