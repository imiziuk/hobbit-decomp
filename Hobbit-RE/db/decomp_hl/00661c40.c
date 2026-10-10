
void FUN_00661c40(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  float10 fVar4;
  undefined *puVar5;
  
  fVar4 = (float10)FUN_00661f20("LODScale",0x3f800000,2);
  FUN_006620d0("LODScale",(float)fVar4);
  fVar4 = (float10)FUN_00661f20("DecimationRate",0x3f800000,2);
  FUN_006620d0("DecimationRate",(float)fVar4);
  fVar4 = (float10)FUN_00661f20("FarClip",0x461c4000,2);
  FUN_006620d0("FarClip",(float)fVar4);
  fVar4 = (float10)FUN_00661f20("ParticleDensity",0x3f800000,2);
  FUN_006620d0("ParticleDensity",(float)fVar4);
  fVar4 = (float10)FUN_00661f20("WaterDensity",0x3f800000,2);
  FUN_006620d0("WaterDensity",(float)fVar4);
  fVar4 = (float10)FUN_00661f20("WebDensity",0x3f800000,2);
  FUN_006620d0("WebDensity",(float)fVar4);
  fVar4 = (float10)FUN_00661f20("FogDensity",0x3f800000,2);
  FUN_006620d0("FogDensity",(float)fVar4);
  fVar4 = (float10)FUN_00661f20("ShadowsEnabled",0x3f800000,2);
  FUN_006620d0("ShadowsEnabled",(float)fVar4);
  fVar4 = (float10)FUN_00661f20("TextureQuality",0,2);
  FUN_006620d0("TextureQuality",(float)fVar4);
  fVar4 = (float10)FUN_00661f20("DynamicLights",0x41000000,2);
  FUN_006620d0("DynamicLights",(float)fVar4);
  puVar5 = &DAT_0074f250;
  uVar1 = FUN_005496c0(s_PerformanceSettings2_bin_0074f270,s_CSIDL_APPDATA_The_Hobbit_0074f254);
  iVar2 = FUN_0064f210(uVar1,puVar5);
  if (iVar2 != 0) {
    puVar3 = &DAT_007f016c;
    do {
      FUN_0064f350(puVar3,4,1,iVar2);
      puVar3 = puVar3 + 10;
    } while ((int)puVar3 < 0x7f02fc);
    FUN_0064f350(&DAT_007f02d8,4,1,iVar2);
    FUN_0064f2b0(iVar2);
  }
  return;
}

