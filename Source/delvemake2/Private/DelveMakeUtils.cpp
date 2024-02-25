// Fill out your copyright notice in the Description page of Project Settings.


#include "DelveMakeUtils.h"

bool DelveMakeUtils::AreFloatsEqual(float A, float B, float Tolerance = KINDA_SMALL_NUMBER)
{
	return FMath::Abs(A - B) <= Tolerance;
}


