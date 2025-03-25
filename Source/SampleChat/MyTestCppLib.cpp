// Fill out your copyright notice in the Description page of Project Settings.


#include "MyTestCppLib.h"

FString UMyTestCppLib::GetMyFirstCPP()
{
    return FString(TEXT("Hello CPP lib in BP"));
}

FString UMyTestCppLib::ThrowBalls()
{
    char ball;
    FString balls;
    int32 idx = 0;
    
    while (idx < 3)
    {
        ball = '0' + FMath::RandRange(0, 9);
        balls.AppendChar(ball);
        idx++;
    }
    return balls;
}

FString UMyTestCppLib::CompareSwing(FString swing, FString balls)
{
    int32 idx = 0;
    int32 cnt = 0;
    int32 strike = 0;
    int32 boll = 0;
    FString score;

    while (idx < 3)
    {
        if (swing[idx] == balls[idx])
        {
            strike++;
        }
        else
        {
            cnt = 0;
            while (cnt < 3)
            {
                if (swing[cnt] == balls[idx])
                {
                    boll++;
                }
                cnt++;
            }
        }
        idx++;
    }

    if (strike <= 0 && boll <= 0)
    {
        score = "OUT";
    }
    else
    {
        score.AppendChar(strike + '0');
        score.AppendChar('S');
        score.AppendChar(boll + '0');
        score.AppendChar('B');
    }

    return score;
}