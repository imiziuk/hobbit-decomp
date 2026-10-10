
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0043fa00(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 local_28 [32];
  float local_8;
  
  iVar4 = FUN_00549470(param_1 + 0x524);
  FUN_00549580(param_1 + 0x524);
  iVar5 = *(int *)(param_1 + 0x528) * 0x50;
  iVar6 = (int)*(short *)(iVar5 + 0x24 + *(int *)(iVar4 + 0x58));
  FUN_0053f7a0(*(undefined4 *)(iVar5 + *(int *)(iVar4 + 0x58) + 0x20),(iVar6 + -1) % iVar6,0,
               local_28);
  fVar1 = *(float *)(param_1 + 0x530) / (float)(*(int *)(param_1 + 0x52c) + -2);
  *(int *)(param_1 + 0x58c) = *(int *)(param_1 + 0x58c) + 1;
  *(int *)(param_1 + 0x59c) = *(int *)(param_1 + 0x59c) + 1;
  *(undefined4 *)(param_1 + 0x580) = 1;
  *(undefined4 *)(param_1 + 0x590) = 1;
  fVar3 = (local_8 - _DAT_006e9988) * fVar1 + _DAT_006e9988;
  fVar2 = _DAT_006e9554 * fVar1 - _DAT_006e9554;
  *(float *)(param_1 + 0x484) = fVar1 * DAT_006e92e4;
  *(float *)(param_1 + 0x48c) = fVar2;
  *(float *)(param_1 + 0x488) = fVar3;
  if (_DAT_006e99a4 < fVar1) {
    if (*(float *)(*(int *)(param_1 + 0x450) + 0xc) < *(float *)(param_1 + 0x610)) {
      FUN_0043a3f0(3,s_C__projects_meridian_Support_Obj_00724060,0xcc3);
      return;
    }
    FUN_0043a3f0(1,s_C__projects_meridian_Support_Obj_00724060,0xcc7);
  }
  return;
}

