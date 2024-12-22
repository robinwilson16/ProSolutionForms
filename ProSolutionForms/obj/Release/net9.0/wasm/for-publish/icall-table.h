#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
216,
229,
230,
231,
232,
233,
234,
235,
236,
237,
240,
241,
242,
410,
411,
412,
435,
436,
437,
454,
455,
456,
554,
555,
556,
559,
596,
597,
599,
601,
603,
605,
610,
618,
619,
620,
621,
622,
623,
624,
625,
706,
715,
716,
785,
791,
794,
796,
801,
802,
804,
805,
809,
810,
812,
813,
816,
817,
818,
821,
823,
826,
828,
830,
839,
904,
906,
908,
918,
919,
920,
922,
928,
929,
930,
931,
932,
940,
941,
942,
946,
947,
949,
953,
954,
955,
1247,
1409,
1410,
7714,
7715,
7717,
7718,
7719,
7720,
7721,
7723,
7724,
7725,
7726,
7744,
7746,
7751,
7753,
7755,
7757,
7808,
7809,
7811,
7812,
7813,
7814,
7815,
7817,
7819,
8805,
8809,
8811,
8812,
8813,
8814,
9230,
9231,
9232,
9233,
9251,
9252,
9253,
9298,
9364,
9367,
9375,
9376,
9377,
9378,
9379,
9701,
9702,
9706,
9707,
9736,
9770,
9777,
9784,
9795,
9799,
9822,
9900,
9902,
9912,
9914,
9915,
9916,
9923,
9938,
9958,
9959,
9967,
9969,
9976,
9977,
9980,
9982,
9987,
9993,
9994,
10001,
10003,
10015,
10018,
10019,
10020,
10031,
10041,
10047,
10048,
10049,
10051,
10052,
10069,
10071,
10086,
10106,
10107,
10134,
10164,
10165,
10653,
10737,
10738,
10923,
10924,
10929,
10930,
10931,
10936,
10988,
11449,
11450,
11782,
11786,
11796,
12644,
12665,
12667,
12669,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal (int);
int ves_icall_System_Array_IsValueOfElementTypeInternal (int,int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy (int,int,int,int,int);
int ves_icall_System_Array_GetLengthInternal_raw (int,int,int);
int ves_icall_System_Array_GetLowerBoundInternal_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
void ves_icall_System_Array_GetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetGenericValue_icall (int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_InitializeInternal_raw (int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
void ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
int ves_icall_System_Enum_InternalGetCorElementType (int);
void ves_icall_System_Enum_InternalGetUnderlyingType_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_ModF (double,int);
int ves_icall_RuntimeMethodHandle_GetFunctionPointer_raw (int,int);
void ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw (int,int,int);
void ves_icall_RuntimeMethodHandle_ReboxToNullable_raw (int,int,int,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
void ves_icall_RuntimeType_make_array_type_raw (int,int,int,int);
void ves_icall_RuntimeType_make_byref_type_raw (int,int,int);
void ves_icall_RuntimeType_make_pointer_type_raw (int,int,int);
void ves_icall_RuntimeType_MakeGenericType_raw (int,int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
int ves_icall_System_RuntimeType_CreateInstanceInternal_raw (int,int);
void ves_icall_RuntimeType_GetDeclaringMethod_raw (int,int,int);
void ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetGenericArgumentsInternal_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition (int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetInterfaces_raw (int,int,int);
int ves_icall_RuntimeType_GetNestedTypes_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetDeclaringType_raw (int,int,int);
void ves_icall_RuntimeType_GetName_raw (int,int,int);
void ves_icall_RuntimeType_GetNamespace_raw (int,int,int);
int ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes (int);
int ves_icall_RuntimeTypeHandle_GetMetadataToken_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType (int);
int ves_icall_RuntimeTypeHandle_HasInstantiation (int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetModule_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition (int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
void ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_String_InternalIsInterned_raw (int,int);
int ves_icall_System_String_InternalIntern_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
int64_t ves_icall_System_Threading_Interlocked_Add_Long (int,int64_t);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
void ves_icall_System_GCHandle_InternalSet_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw (int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalBox_raw (int,int,int);
int ves_icall_System_Reflection_Assembly_GetExecutingAssembly_raw (int,int);
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
int ves_icall_System_Reflection_LoaderAllocatorScout_Destroy (int);
void ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw (int,int,int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw (int,int,int,int,int);
void ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
void ves_icall_RuntimeFieldInfo_SetValueInternal_raw (int,int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
void ves_icall_InvokeClassConstructor_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_InternalGetTypes_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int,int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getUSIndex_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
int ves_icall_ModuleBuilder_getMethodToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_System_Diagnostics_Debugger_IsAttached_internal ();
int ves_icall_System_Diagnostics_StackFrame_GetFrameInfo (int,int,int,int,int,int,int,int);
void ves_icall_System_Diagnostics_StackTrace_GetTrace (int,int,int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 216,
ves_icall_System_Array_InternalCreate,
// token 229,
ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal,
// token 230,
ves_icall_System_Array_IsValueOfElementTypeInternal,
// token 231,
ves_icall_System_Array_CanChangePrimitive,
// token 232,
ves_icall_System_Array_FastCopy,
// token 233,
ves_icall_System_Array_GetLengthInternal_raw,
// token 234,
ves_icall_System_Array_GetLowerBoundInternal_raw,
// token 235,
ves_icall_System_Array_GetGenericValue_icall,
// token 236,
ves_icall_System_Array_GetValueImpl_raw,
// token 237,
ves_icall_System_Array_SetGenericValue_icall,
// token 240,
ves_icall_System_Array_SetValueImpl_raw,
// token 241,
ves_icall_System_Array_InitializeInternal_raw,
// token 242,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 410,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 411,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 412,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 435,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 436,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 437,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 454,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 455,
ves_icall_System_Enum_InternalGetCorElementType,
// token 456,
ves_icall_System_Enum_InternalGetUnderlyingType_raw,
// token 554,
ves_icall_System_Environment_get_ProcessorCount,
// token 555,
ves_icall_System_Environment_get_TickCount,
// token 556,
ves_icall_System_Environment_get_TickCount64,
// token 559,
ves_icall_System_Environment_FailFast_raw,
// token 596,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 597,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 599,
ves_icall_System_GC_SuppressFinalize_raw,
// token 601,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 603,
ves_icall_System_GC_GetGCMemoryInfo,
// token 605,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 610,
ves_icall_System_Object_MemberwiseClone_raw,
// token 618,
ves_icall_System_Math_Ceiling,
// token 619,
ves_icall_System_Math_Cos,
// token 620,
ves_icall_System_Math_Floor,
// token 621,
ves_icall_System_Math_Pow,
// token 622,
ves_icall_System_Math_Sin,
// token 623,
ves_icall_System_Math_Sqrt,
// token 624,
ves_icall_System_Math_Tan,
// token 625,
ves_icall_System_Math_ModF,
// token 706,
ves_icall_RuntimeMethodHandle_GetFunctionPointer_raw,
// token 715,
ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw,
// token 716,
ves_icall_RuntimeMethodHandle_ReboxToNullable_raw,
// token 785,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 791,
ves_icall_RuntimeType_make_array_type_raw,
// token 794,
ves_icall_RuntimeType_make_byref_type_raw,
// token 796,
ves_icall_RuntimeType_make_pointer_type_raw,
// token 801,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 802,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 804,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 805,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 809,
ves_icall_System_RuntimeType_CreateInstanceInternal_raw,
// token 810,
ves_icall_RuntimeType_GetDeclaringMethod_raw,
// token 812,
ves_icall_System_RuntimeType_getFullName_raw,
// token 813,
ves_icall_RuntimeType_GetGenericArgumentsInternal_raw,
// token 816,
ves_icall_RuntimeType_GetGenericParameterPosition,
// token 817,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 818,
ves_icall_RuntimeType_GetFields_native_raw,
// token 821,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 823,
ves_icall_RuntimeType_GetNestedTypes_native_raw,
// token 826,
ves_icall_RuntimeType_GetDeclaringType_raw,
// token 828,
ves_icall_RuntimeType_GetName_raw,
// token 830,
ves_icall_RuntimeType_GetNamespace_raw,
// token 839,
ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw,
// token 904,
ves_icall_RuntimeTypeHandle_GetAttributes,
// token 906,
ves_icall_RuntimeTypeHandle_GetMetadataToken_raw,
// token 908,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 918,
ves_icall_RuntimeTypeHandle_GetCorElementType,
// token 919,
ves_icall_RuntimeTypeHandle_HasInstantiation,
// token 920,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 922,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 928,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 929,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 930,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 931,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 932,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 940,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 941,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition,
// token 942,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 946,
ves_icall_RuntimeTypeHandle_is_subclass_of_raw,
// token 947,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 949,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 953,
ves_icall_System_String_FastAllocateString_raw,
// token 954,
ves_icall_System_String_InternalIsInterned_raw,
// token 955,
ves_icall_System_String_InternalIntern_raw,
// token 1247,
ves_icall_System_Type_internal_from_handle_raw,
// token 1409,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1410,
ves_icall_System_ValueType_Equals_raw,
// token 7714,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 7715,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 7717,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 7718,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 7719,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 7720,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 7721,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 7723,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 7724,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 7725,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 7726,
ves_icall_System_Threading_Interlocked_Add_Long,
// token 7744,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 7746,
mono_monitor_exit_icall_raw,
// token 7751,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 7753,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 7755,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 7757,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 7808,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 7809,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 7811,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 7812,
ves_icall_System_Threading_Thread_GetState_raw,
// token 7813,
ves_icall_System_Threading_Thread_SetState_raw,
// token 7814,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 7815,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 7817,
ves_icall_System_Threading_Thread_YieldInternal,
// token 7819,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 8805,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 8809,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 8811,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 8812,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 8813,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 8814,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 9230,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 9231,
ves_icall_System_GCHandle_InternalFree_raw,
// token 9232,
ves_icall_System_GCHandle_InternalGet_raw,
// token 9233,
ves_icall_System_GCHandle_InternalSet_raw,
// token 9251,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 9252,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 9253,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 9298,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 9364,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw,
// token 9367,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw,
// token 9375,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 9376,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 9377,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw,
// token 9378,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 9379,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalBox_raw,
// token 9701,
ves_icall_System_Reflection_Assembly_GetExecutingAssembly_raw,
// token 9702,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 9706,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 9707,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 9736,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 9770,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 9777,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 9784,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 9795,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 9799,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 9822,
ves_icall_System_Reflection_LoaderAllocatorScout_Destroy,
// token 9900,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw,
// token 9902,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 9912,
ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
// token 9914,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw,
// token 9915,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 9916,
ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw,
// token 9923,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 9938,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 9958,
ves_icall_reflection_get_token_raw,
// token 9959,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 9967,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 9969,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 9976,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 9977,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 9980,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 9982,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 9987,
ves_icall_reflection_get_token_raw,
// token 9993,
ves_icall_get_method_info_raw,
// token 9994,
ves_icall_get_method_attributes,
// token 10001,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 10003,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 10015,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 10018,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 10019,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 10020,
ves_icall_reflection_get_token_raw,
// token 10031,
ves_icall_InternalInvoke_raw,
// token 10041,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 10047,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 10048,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 10049,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 10051,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 10052,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 10069,
ves_icall_InvokeClassConstructor_raw,
// token 10071,
ves_icall_InternalInvoke_raw,
// token 10086,
ves_icall_reflection_get_token_raw,
// token 10106,
ves_icall_System_Reflection_RuntimeModule_InternalGetTypes_raw,
// token 10107,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 10134,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 10164,
ves_icall_reflection_get_token_raw,
// token 10165,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 10653,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 10737,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 10738,
ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw,
// token 10923,
ves_icall_ModuleBuilder_basic_init_raw,
// token 10924,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 10929,
ves_icall_ModuleBuilder_getUSIndex_raw,
// token 10930,
ves_icall_ModuleBuilder_getToken_raw,
// token 10931,
ves_icall_ModuleBuilder_getMethodToken_raw,
// token 10936,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 10988,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 11449,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 11450,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 11782,
ves_icall_System_Diagnostics_Debugger_IsAttached_internal,
// token 11786,
ves_icall_System_Diagnostics_StackFrame_GetFrameInfo,
// token 11796,
ves_icall_System_Diagnostics_StackTrace_GetTrace,
// token 12644,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 12665,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 12667,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 12669,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_flags [] = {
0,
0,
0,
0,
0,
4,
4,
0,
4,
0,
4,
4,
4,
0,
0,
0,
4,
4,
4,
4,
0,
4,
0,
0,
0,
4,
4,
4,
4,
4,
0,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
0,
};
