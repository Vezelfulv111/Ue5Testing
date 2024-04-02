#pragma once
#include "EnhancedInputComponent.h"

class Movements
{
public:
	void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
	{
		UEnhancedInputComponent* Input = Cast<UEnhancedInputComponent>(PlayerInputComponent);
		// You can bind to any of the trigger events here by changing the "ETriggerEvent" enum value
		//Input->BindAction(IA_PACE, ETriggerEvent::Triggered, this, &SomeCallbackFunc);
	}
	 
	void SomeCallbackFunc(const FInputActionInstance& Instance)
	{
		// Get the value of the Input Action for whatever type you want here...
		FVector VectorValue = Instance.GetValue().Get<FVector>();
		FVector2D DAxisValue = Instance.GetValue().Get<FVector2D>();
		float FloatValue = Instance.GetValue().Get<float>(); 
		bool BoolValue = Instance.GetValue().Get<bool>();
	 
		// Do your cool stuff here!
	} 
};
