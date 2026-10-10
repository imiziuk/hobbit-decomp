
void __thiscall FUN_0051d290(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  float10 fVar4;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = 0;
  local_8 = 0;
  uVar1 = __ftol();
  FUN_006a5e20(0,uVar1);
  FUN_00662160("LODScale",param_2);
  uVar1 = __ftol();
  FUN_006a5e90(uVar1);
  *(undefined4 *)(param_1 + 0x1a8) = uVar1;
  uVar1 = __ftol();
  FUN_006a5e20(0,uVar1);
  FUN_00662160("DecimationRate",param_2);
  uVar1 = __ftol();
  FUN_006a5e90(uVar1);
  *(undefined4 *)(param_1 + 0x1ac) = uVar1;
  uVar1 = __ftol();
  FUN_006a5e20(0,uVar1);
  FUN_00662160("ParticleDensity",param_2);
  uVar1 = __ftol();
  FUN_006a5e90(uVar1);
  *(undefined4 *)(param_1 + 0x1b0) = uVar1;
  uVar1 = __ftol();
  FUN_006a5e20(0,uVar1);
  FUN_00662160("FarClip",param_2);
  uVar1 = __ftol();
  FUN_006a5e90(uVar1);
  *(undefined4 *)(param_1 + 0x1b4) = uVar1;
  FUN_00661ea0("TextureQuality",&local_4,&local_8);
  uVar1 = __ftol();
  FUN_006a5e20(0,uVar1);
  FUN_00661f20("TextureQuality",local_8,param_2);
  __ftol();
  uVar1 = __ftol();
  FUN_006a5e90(uVar1);
  *(undefined4 *)(param_1 + 0x1b8) = uVar1;
  FUN_00661ea0("DynamicLights",&local_4,&local_8);
  uVar1 = __ftol();
  uVar2 = __ftol(uVar1);
  FUN_006a5e20(uVar2,uVar1);
  FUN_00661f20("DynamicLights",local_8,param_2);
  uVar1 = __ftol();
  FUN_006a5e90(uVar1);
  *(undefined4 *)(param_1 + 0x1bc) = uVar1;
  fVar4 = (float10)FUN_00661f20("ShadowsEnabled",0x3f800000,param_2);
  uVar3 = (uint)((NAN(fVar4) || NAN((float10)DAT_006e92e4)) == (fVar4 == (float10)DAT_006e92e4));
  FUN_006a58d0(uVar3);
  *(uint *)(param_1 + 0x1c0) = uVar3;
  return;
}

