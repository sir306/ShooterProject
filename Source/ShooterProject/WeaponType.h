#pragma once

UENUM(BlueprintType)
enum class EWeaponType : uint8
{
	EWT_SubmachineGun	UMETA(DisplayName = "SubmachineGun"),
	EWT_AssualtRifle	UMETA(DisplayName = "AssualtRifle"),
	EWT_Pistol	UMETA(DisplayName = "Pistol"),

	EWT_MAX				UMETA(DisplayName = "DefaultMAX")
};