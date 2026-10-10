
void FUN_005a3dc0(void)

{
  undefined4 uVar1;
  float10 fVar2;
  
  fVar2 = (float10)FUN_00661f20("LODScale",0x3f800000,2);
  FUN_005a33f0((float)fVar2);
  fVar2 = (float10)FUN_00661f20("DecimationRate",0x3f800000,2);
  FUN_005a3430((float)fVar2);
  fVar2 = (float10)FUN_00661f20("FarClip",0x461c4000,2);
  FUN_005a3d10((float)fVar2);
  fVar2 = (float10)FUN_00661f20("WaterDensity",0x3f800000,2);
  FUN_005a34a0((float)fVar2);
  fVar2 = (float10)FUN_00661f20("WebDensity",0x3f800000,2);
  FUN_005a3980((float)fVar2);
  fVar2 = (float10)FUN_00661f20("FogDensity",0x3f800000,2);
  FUN_005a3720((float)fVar2);
  fVar2 = (float10)FUN_00661f20("ParticleDensity",0x3f800000,2);
  FUN_005a3cb0((float)fVar2);
  fVar2 = (float10)FUN_00661f20("ShadowsEnabled",0x3f800000,2);
  FUN_005a3480((NAN(fVar2) || NAN((float10)DAT_006e92e4)) == (fVar2 == (float10)DAT_006e92e4));
  FUN_00661f20("DynamicLights",0x41000000,2);
  uVar1 = __ftol();
  FUN_005a3d90(uVar1);
  FUN_00661f20("TextureQuality",0,2);
  uVar1 = __ftol();
  FUN_005a3d70(uVar1);
  return;
}

