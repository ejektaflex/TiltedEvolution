#include <TiltedOnlinePCH.h>

#include <Misc/Sky.h>

Sky* Sky::GetInstance()
{
    POINTER_SKYRIMSE(Sky*, s_instance, 401652);

    return *(s_instance.Get());
}
