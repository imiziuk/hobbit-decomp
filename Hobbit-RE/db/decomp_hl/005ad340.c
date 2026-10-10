
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005ad340(int param_1)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  undefined4 uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006de248;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_StateController__UpdateAngry_00744bdc);
  fVar3 = *(float *)(param_1 + 0x19c) + *(float *)(param_1 + 0x210);
  uVar1 = *(uint *)(param_1 + 0x130);
  *(float *)(param_1 + 0x210) = fVar3;
  local_4 = 0;
  if ((uVar1 & 0x1000) == 0) {
    iVar2 = *(int *)(param_1 + 0x20c);
    if ((iVar2 < *(int *)(param_1 + 0x208)) || (*(int *)(param_1 + 0x208) < 1)) {
      if (_DAT_006f4288 <= fVar3) {
        if (0 < iVar2) {
          *(int *)(param_1 + 0x20c) = iVar2 + -1;
        }
        *(undefined4 *)(param_1 + 0x210) = 0;
      }
    }
    else {
      *(uint *)(param_1 + 0x130) = uVar1 | 0x1000;
      *(undefined4 *)(param_1 + 0x20c) = 0;
      *(undefined4 *)(param_1 + 0x210) = 0;
      uVar4 = DAT_006f428c;
      FUN_005af120(DAT_006f428c);
      FUN_004bd4c0(uVar4);
      if (*(int *)(param_1 + 0xbc) != 0) {
        FUN_005be270();
      }
    }
  }
  else if (_DAT_006f4284 <= fVar3) {
    *(uint *)(param_1 + 0x130) = uVar1 & 0xffffefff;
    uVar4 = 0x3f800000;
    *(undefined4 *)(param_1 + 0x20c) = 0;
    *(undefined4 *)(param_1 + 0x210) = 0;
    FUN_005af120(0x3f800000);
    FUN_004bd4c0(uVar4);
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

