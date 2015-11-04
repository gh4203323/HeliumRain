#pragma once

#include "../Economy/FlareResource.h"
#include "FlareResourceCatalogEntry.generated.h"


UCLASS()
class UFlareResourceCatalogEntry : public UDataAsset
{
	GENERATED_UCLASS_BODY()

public:

	/*----------------------------------------------------
		Public data
	----------------------------------------------------*/

	/** Factory data */
	UPROPERTY(EditAnywhere, Category = Content)
	FFlareResourceDescription Data;

};
