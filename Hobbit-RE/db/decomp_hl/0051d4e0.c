
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0051d4e0(int param_1)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  float local_8;
  undefined1 local_4 [4];
  
  iVar2 = FUN_004c8970();
  fVar1 = (float)iVar2;
  if ((NAN(fVar1) || NAN((float)*(int *)(param_1 + 0x1a8))) ==
      (fVar1 == (float)*(int *)(param_1 + 0x1a8))) {
    FUN_00662230("LODScale",_DAT_00762640 * fVar1);
  }
  iVar2 = FUN_004c8970();
  fVar1 = (float)iVar2;
  if ((NAN(fVar1) || NAN((float)*(int *)(param_1 + 0x1ac))) ==
      (fVar1 == (float)*(int *)(param_1 + 0x1ac))) {
    FUN_00662230("DecimationRate",_DAT_00762640 * fVar1);
  }
  iVar2 = FUN_004c8970();
  fVar1 = (float)iVar2;
  if ((NAN((float)*(int *)(param_1 + 0x1b0)) || NAN(fVar1)) ==
      ((float)*(int *)(param_1 + 0x1b0) == fVar1)) {
    FUN_00662230("ParticleDensity",_DAT_00762640 * fVar1);
    FUN_00662230("WaterDensity",_DAT_00762640 * fVar1);
    FUN_00662230("WebDensity",_DAT_00762640 * fVar1);
    FUN_00662230("FogDensity",_DAT_00762640 * fVar1);
  }
  iVar2 = FUN_004c8970();
  fVar1 = (float)iVar2;
  if ((NAN(fVar1) || NAN((float)*(int *)(param_1 + 0x1b4))) ==
      (fVar1 == (float)*(int *)(param_1 + 0x1b4))) {
    FUN_00662230("FarClip",_DAT_00762640 * fVar1);
  }
  iVar2 = FUN_004c8970();
  fVar1 = (float)iVar2;
  if ((NAN(fVar1) || NAN((float)*(int *)(param_1 + 0x1b8))) ==
      (fVar1 == (float)*(int *)(param_1 + 0x1b8))) {
    FUN_00661ea0("TextureQuality",&local_8,local_4);
    fVar3 = (float10)FUN_006c0ae5((double)((local_8 - fVar1) + _DAT_006e936c));
    FUN_006620d0("TextureQuality",(float)fVar3);
  }
  local_8 = (float)FUN_004c8970();
  fVar1 = (float)(int)local_8;
  if ((NAN(fVar1) || NAN((float)*(int *)(param_1 + 0x1bc))) ==
      (fVar1 == (float)*(int *)(param_1 + 0x1bc))) {
    fVar3 = (float10)FUN_006c0ae5((double)(fVar1 + _DAT_006e936c));
    FUN_006620d0("DynamicLights",(float)fVar3);
  }
  local_8 = (float)FUN_006a5900();
  if ((NAN((float)(int)local_8) || NAN((float)*(int *)(param_1 + 0x1c0))) ==
      ((float)(int)local_8 == (float)*(int *)(param_1 + 0x1c0))) {
    FUN_006620d0();
  }
  FUN_00661e00();
  return;
}

