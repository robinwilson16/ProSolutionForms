#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
188,
201,
202,
203,
204,
205,
206,
207,
208,
209,
212,
213,
214,
382,
383,
384,
407,
408,
409,
426,
427,
428,
526,
527,
528,
531,
567,
568,
570,
572,
574,
576,
581,
589,
590,
591,
592,
593,
594,
595,
596,
679,
688,
689,
758,
764,
767,
769,
774,
775,
777,
778,
782,
783,
785,
786,
789,
790,
791,
794,
796,
799,
801,
803,
812,
877,
879,
881,
891,
892,
893,
895,
901,
902,
903,
904,
905,
913,
914,
915,
919,
920,
922,
926,
927,
928,
1220,
1382,
1383,
7684,
7685,
7687,
7688,
7689,
7690,
7691,
7693,
7694,
7695,
7713,
7715,
7720,
7722,
7724,
7726,
7777,
7778,
7780,
7781,
7782,
7783,
7784,
7786,
7788,
8769,
8773,
8775,
8776,
8777,
8778,
9194,
9195,
9196,
9197,
9215,
9216,
9217,
9261,
9327,
9330,
9338,
9339,
9340,
9341,
9342,
9623,
9624,
9628,
9629,
9658,
9692,
9699,
9706,
9717,
9721,
9744,
9822,
9824,
9834,
9836,
9837,
9838,
9845,
9860,
9880,
9881,
9889,
9891,
9898,
9899,
9902,
9904,
9909,
9915,
9916,
9923,
9925,
9937,
9940,
9941,
9942,
9953,
9963,
9969,
9970,
9971,
9973,
9974,
9991,
9993,
10008,
10028,
10029,
10056,
10086,
10087,
10575,
10659,
10660,
10845,
10846,
10851,
10852,
10853,
10858,
10910,
11312,
11313,
11509,
11513,
11523,
12371,
12392,
12394,
12396,
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
// token 188,
ves_icall_System_Array_InternalCreate,
// token 201,
ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal,
// token 202,
ves_icall_System_Array_IsValueOfElementTypeInternal,
// token 203,
ves_icall_System_Array_CanChangePrimitive,
// token 204,
ves_icall_System_Array_FastCopy,
// token 205,
ves_icall_System_Array_GetLengthInternal_raw,
// token 206,
ves_icall_System_Array_GetLowerBoundInternal_raw,
// token 207,
ves_icall_System_Array_GetGenericValue_icall,
// token 208,
ves_icall_System_Array_GetValueImpl_raw,
// token 209,
ves_icall_System_Array_SetGenericValue_icall,
// token 212,
ves_icall_System_Array_SetValueImpl_raw,
// token 213,
ves_icall_System_Array_InitializeInternal_raw,
// token 214,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 382,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 383,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 384,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 407,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 408,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 409,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 426,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 427,
ves_icall_System_Enum_InternalGetCorElementType,
// token 428,
ves_icall_System_Enum_InternalGetUnderlyingType_raw,
// token 526,
ves_icall_System_Environment_get_ProcessorCount,
// token 527,
ves_icall_System_Environment_get_TickCount,
// token 528,
ves_icall_System_Environment_get_TickCount64,
// token 531,
ves_icall_System_Environment_FailFast_raw,
// token 567,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 568,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 570,
ves_icall_System_GC_SuppressFinalize_raw,
// token 572,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 574,
ves_icall_System_GC_GetGCMemoryInfo,
// token 576,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 581,
ves_icall_System_Object_MemberwiseClone_raw,
// token 589,
ves_icall_System_Math_Ceiling,
// token 590,
ves_icall_System_Math_Cos,
// token 591,
ves_icall_System_Math_Floor,
// token 592,
ves_icall_System_Math_Pow,
// token 593,
ves_icall_System_Math_Sin,
// token 594,
ves_icall_System_Math_Sqrt,
// token 595,
ves_icall_System_Math_Tan,
// token 596,
ves_icall_System_Math_ModF,
// token 679,
ves_icall_RuntimeMethodHandle_GetFunctionPointer_raw,
// token 688,
ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw,
// token 689,
ves_icall_RuntimeMethodHandle_ReboxToNullable_raw,
// token 758,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 764,
ves_icall_RuntimeType_make_array_type_raw,
// token 767,
ves_icall_RuntimeType_make_byref_type_raw,
// token 769,
ves_icall_RuntimeType_make_pointer_type_raw,
// token 774,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 775,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 777,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 778,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 782,
ves_icall_System_RuntimeType_CreateInstanceInternal_raw,
// token 783,
ves_icall_RuntimeType_GetDeclaringMethod_raw,
// token 785,
ves_icall_System_RuntimeType_getFullName_raw,
// token 786,
ves_icall_RuntimeType_GetGenericArgumentsInternal_raw,
// token 789,
ves_icall_RuntimeType_GetGenericParameterPosition,
// token 790,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 791,
ves_icall_RuntimeType_GetFields_native_raw,
// token 794,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 796,
ves_icall_RuntimeType_GetNestedTypes_native_raw,
// token 799,
ves_icall_RuntimeType_GetDeclaringType_raw,
// token 801,
ves_icall_RuntimeType_GetName_raw,
// token 803,
ves_icall_RuntimeType_GetNamespace_raw,
// token 812,
ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw,
// token 877,
ves_icall_RuntimeTypeHandle_GetAttributes,
// token 879,
ves_icall_RuntimeTypeHandle_GetMetadataToken_raw,
// token 881,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 891,
ves_icall_RuntimeTypeHandle_GetCorElementType,
// token 892,
ves_icall_RuntimeTypeHandle_HasInstantiation,
// token 893,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 895,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 901,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 902,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 903,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 904,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 905,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 913,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 914,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition,
// token 915,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 919,
ves_icall_RuntimeTypeHandle_is_subclass_of_raw,
// token 920,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 922,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 926,
ves_icall_System_String_FastAllocateString_raw,
// token 927,
ves_icall_System_String_InternalIsInterned_raw,
// token 928,
ves_icall_System_String_InternalIntern_raw,
// token 1220,
ves_icall_System_Type_internal_from_handle_raw,
// token 1382,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1383,
ves_icall_System_ValueType_Equals_raw,
// token 7684,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 7685,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 7687,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 7688,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 7689,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 7690,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 7691,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 7693,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 7694,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 7695,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 7713,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 7715,
mono_monitor_exit_icall_raw,
// token 7720,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 7722,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 7724,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 7726,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 7777,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 7778,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 7780,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 7781,
ves_icall_System_Threading_Thread_GetState_raw,
// token 7782,
ves_icall_System_Threading_Thread_SetState_raw,
// token 7783,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 7784,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 7786,
ves_icall_System_Threading_Thread_YieldInternal,
// token 7788,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 8769,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 8773,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 8775,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 8776,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 8777,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 8778,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 9194,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 9195,
ves_icall_System_GCHandle_InternalFree_raw,
// token 9196,
ves_icall_System_GCHandle_InternalGet_raw,
// token 9197,
ves_icall_System_GCHandle_InternalSet_raw,
// token 9215,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 9216,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 9217,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 9261,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 9327,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw,
// token 9330,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw,
// token 9338,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 9339,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 9340,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw,
// token 9341,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 9342,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalBox_raw,
// token 9623,
ves_icall_System_Reflection_Assembly_GetExecutingAssembly_raw,
// token 9624,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 9628,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 9629,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 9658,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 9692,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 9699,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 9706,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 9717,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 9721,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 9744,
ves_icall_System_Reflection_LoaderAllocatorScout_Destroy,
// token 9822,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw,
// token 9824,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 9834,
ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
// token 9836,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw,
// token 9837,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 9838,
ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw,
// token 9845,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 9860,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 9880,
ves_icall_reflection_get_token_raw,
// token 9881,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 9889,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 9891,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 9898,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 9899,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 9902,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 9904,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 9909,
ves_icall_reflection_get_token_raw,
// token 9915,
ves_icall_get_method_info_raw,
// token 9916,
ves_icall_get_method_attributes,
// token 9923,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 9925,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 9937,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 9940,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 9941,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 9942,
ves_icall_reflection_get_token_raw,
// token 9953,
ves_icall_InternalInvoke_raw,
// token 9963,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 9969,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 9970,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 9971,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 9973,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 9974,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 9991,
ves_icall_InvokeClassConstructor_raw,
// token 9993,
ves_icall_InternalInvoke_raw,
// token 10008,
ves_icall_reflection_get_token_raw,
// token 10028,
ves_icall_System_Reflection_RuntimeModule_InternalGetTypes_raw,
// token 10029,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 10056,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 10086,
ves_icall_reflection_get_token_raw,
// token 10087,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 10575,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 10659,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 10660,
ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw,
// token 10845,
ves_icall_ModuleBuilder_basic_init_raw,
// token 10846,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 10851,
ves_icall_ModuleBuilder_getUSIndex_raw,
// token 10852,
ves_icall_ModuleBuilder_getToken_raw,
// token 10853,
ves_icall_ModuleBuilder_getMethodToken_raw,
// token 10858,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 10910,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 11312,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 11313,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 11509,
ves_icall_System_Diagnostics_Debugger_IsAttached_internal,
// token 11513,
ves_icall_System_Diagnostics_StackFrame_GetFrameInfo,
// token 11523,
ves_icall_System_Diagnostics_StackTrace_GetTrace,
// token 12371,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 12392,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 12394,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 12396,
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
