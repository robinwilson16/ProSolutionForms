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
784,
790,
793,
795,
800,
801,
803,
804,
808,
809,
811,
812,
815,
816,
817,
820,
822,
825,
827,
829,
838,
903,
905,
907,
917,
918,
919,
921,
927,
928,
929,
930,
931,
939,
940,
941,
945,
946,
948,
952,
953,
954,
1246,
1405,
1406,
7710,
7711,
7713,
7714,
7715,
7716,
7717,
7719,
7720,
7721,
7722,
7739,
7741,
7746,
7748,
7750,
7752,
7803,
7804,
7806,
7807,
7808,
7809,
7810,
7812,
7814,
8800,
8804,
8806,
8807,
8808,
8809,
9225,
9226,
9227,
9228,
9246,
9247,
9248,
9293,
9359,
9362,
9370,
9371,
9372,
9373,
9374,
9696,
9697,
9701,
9702,
9731,
9765,
9772,
9779,
9790,
9794,
9817,
9895,
9897,
9907,
9909,
9910,
9911,
9918,
9933,
9953,
9954,
9962,
9964,
9971,
9972,
9975,
9977,
9982,
9988,
9989,
9996,
9998,
10010,
10013,
10014,
10015,
10026,
10036,
10042,
10043,
10044,
10046,
10047,
10064,
10066,
10081,
10101,
10102,
10129,
10159,
10160,
10645,
10729,
10730,
10915,
10916,
10921,
10922,
10923,
10928,
10980,
11438,
11439,
11771,
11775,
11785,
12633,
12654,
12656,
12658,
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
// token 784,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 790,
ves_icall_RuntimeType_make_array_type_raw,
// token 793,
ves_icall_RuntimeType_make_byref_type_raw,
// token 795,
ves_icall_RuntimeType_make_pointer_type_raw,
// token 800,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 801,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 803,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 804,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 808,
ves_icall_System_RuntimeType_CreateInstanceInternal_raw,
// token 809,
ves_icall_RuntimeType_GetDeclaringMethod_raw,
// token 811,
ves_icall_System_RuntimeType_getFullName_raw,
// token 812,
ves_icall_RuntimeType_GetGenericArgumentsInternal_raw,
// token 815,
ves_icall_RuntimeType_GetGenericParameterPosition,
// token 816,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 817,
ves_icall_RuntimeType_GetFields_native_raw,
// token 820,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 822,
ves_icall_RuntimeType_GetNestedTypes_native_raw,
// token 825,
ves_icall_RuntimeType_GetDeclaringType_raw,
// token 827,
ves_icall_RuntimeType_GetName_raw,
// token 829,
ves_icall_RuntimeType_GetNamespace_raw,
// token 838,
ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw,
// token 903,
ves_icall_RuntimeTypeHandle_GetAttributes,
// token 905,
ves_icall_RuntimeTypeHandle_GetMetadataToken_raw,
// token 907,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 917,
ves_icall_RuntimeTypeHandle_GetCorElementType,
// token 918,
ves_icall_RuntimeTypeHandle_HasInstantiation,
// token 919,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 921,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 927,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 928,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 929,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 930,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 931,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 939,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 940,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition,
// token 941,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 945,
ves_icall_RuntimeTypeHandle_is_subclass_of_raw,
// token 946,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 948,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 952,
ves_icall_System_String_FastAllocateString_raw,
// token 953,
ves_icall_System_String_InternalIsInterned_raw,
// token 954,
ves_icall_System_String_InternalIntern_raw,
// token 1246,
ves_icall_System_Type_internal_from_handle_raw,
// token 1405,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1406,
ves_icall_System_ValueType_Equals_raw,
// token 7710,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 7711,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 7713,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 7714,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 7715,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 7716,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 7717,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 7719,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 7720,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 7721,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 7722,
ves_icall_System_Threading_Interlocked_Add_Long,
// token 7739,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 7741,
mono_monitor_exit_icall_raw,
// token 7746,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 7748,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 7750,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 7752,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 7803,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 7804,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 7806,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 7807,
ves_icall_System_Threading_Thread_GetState_raw,
// token 7808,
ves_icall_System_Threading_Thread_SetState_raw,
// token 7809,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 7810,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 7812,
ves_icall_System_Threading_Thread_YieldInternal,
// token 7814,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 8800,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 8804,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 8806,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 8807,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 8808,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 8809,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 9225,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 9226,
ves_icall_System_GCHandle_InternalFree_raw,
// token 9227,
ves_icall_System_GCHandle_InternalGet_raw,
// token 9228,
ves_icall_System_GCHandle_InternalSet_raw,
// token 9246,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 9247,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 9248,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 9293,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 9359,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw,
// token 9362,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw,
// token 9370,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 9371,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 9372,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw,
// token 9373,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 9374,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalBox_raw,
// token 9696,
ves_icall_System_Reflection_Assembly_GetExecutingAssembly_raw,
// token 9697,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 9701,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 9702,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 9731,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 9765,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 9772,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 9779,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 9790,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 9794,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 9817,
ves_icall_System_Reflection_LoaderAllocatorScout_Destroy,
// token 9895,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw,
// token 9897,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 9907,
ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
// token 9909,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw,
// token 9910,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 9911,
ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw,
// token 9918,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 9933,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 9953,
ves_icall_reflection_get_token_raw,
// token 9954,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 9962,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 9964,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 9971,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 9972,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 9975,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 9977,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 9982,
ves_icall_reflection_get_token_raw,
// token 9988,
ves_icall_get_method_info_raw,
// token 9989,
ves_icall_get_method_attributes,
// token 9996,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 9998,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 10010,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 10013,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 10014,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 10015,
ves_icall_reflection_get_token_raw,
// token 10026,
ves_icall_InternalInvoke_raw,
// token 10036,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 10042,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 10043,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 10044,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 10046,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 10047,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 10064,
ves_icall_InvokeClassConstructor_raw,
// token 10066,
ves_icall_InternalInvoke_raw,
// token 10081,
ves_icall_reflection_get_token_raw,
// token 10101,
ves_icall_System_Reflection_RuntimeModule_InternalGetTypes_raw,
// token 10102,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 10129,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 10159,
ves_icall_reflection_get_token_raw,
// token 10160,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 10645,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 10729,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 10730,
ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw,
// token 10915,
ves_icall_ModuleBuilder_basic_init_raw,
// token 10916,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 10921,
ves_icall_ModuleBuilder_getUSIndex_raw,
// token 10922,
ves_icall_ModuleBuilder_getToken_raw,
// token 10923,
ves_icall_ModuleBuilder_getMethodToken_raw,
// token 10928,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 10980,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 11438,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 11439,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 11771,
ves_icall_System_Diagnostics_Debugger_IsAttached_internal,
// token 11775,
ves_icall_System_Diagnostics_StackFrame_GetFrameInfo,
// token 11785,
ves_icall_System_Diagnostics_StackTrace_GetTrace,
// token 12633,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 12654,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 12656,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 12658,
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
