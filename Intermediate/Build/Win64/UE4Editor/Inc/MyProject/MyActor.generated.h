// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT_MyActor_generated_h
#error "MyActor.generated.h already included, missing '#pragma once' in MyActor.h"
#endif
#define MYPROJECT_MyActor_generated_h

#define MyProject_Source_MyProject_MyActor_h_11_RPC_WRAPPERS
#define MyProject_Source_MyProject_MyActor_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define MyProject_Source_MyProject_MyActor_h_11_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesAMyActor(); \
	friend MYPROJECT_API class UClass* Z_Construct_UClass_AMyActor(); \
	public: \
	DECLARE_CLASS(AMyActor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AMyActor) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MyProject_Source_MyProject_MyActor_h_11_INCLASS \
	private: \
	static void StaticRegisterNativesAMyActor(); \
	friend MYPROJECT_API class UClass* Z_Construct_UClass_AMyActor(); \
	public: \
	DECLARE_CLASS(AMyActor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AMyActor) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MyProject_Source_MyProject_MyActor_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyActor(AMyActor&&); \
	NO_API AMyActor(const AMyActor&); \
public:


#define MyProject_Source_MyProject_MyActor_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyActor(AMyActor&&); \
	NO_API AMyActor(const AMyActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyActor)


#define MyProject_Source_MyProject_MyActor_h_11_PRIVATE_PROPERTY_OFFSET
#define MyProject_Source_MyProject_MyActor_h_8_PROLOG
#define MyProject_Source_MyProject_MyActor_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_MyActor_h_11_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_MyActor_h_11_RPC_WRAPPERS \
	MyProject_Source_MyProject_MyActor_h_11_INCLASS \
	MyProject_Source_MyProject_MyActor_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Source_MyProject_MyActor_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_MyActor_h_11_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_MyActor_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Source_MyProject_MyActor_h_11_INCLASS_NO_PURE_DECLS \
	MyProject_Source_MyProject_MyActor_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Source_MyProject_MyActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
