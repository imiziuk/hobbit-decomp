
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00595d60(int param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int *piVar7;
  float *pfVar8;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dd2b8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_PhysController__ChangeNavState_00743060);
  uVar3 = *(undefined4 *)(param_1 + 0x230);
  local_4 = 0;
  switch(uVar3) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
    *(undefined4 *)(param_1 + 0x3c) = uVar3;
    break;
  case 7:
    *(undefined4 *)(param_1 + 0x3c) = uVar3;
    if ((*(int *)(param_1 + 400) == 0) || (*(int *)(param_1 + 0x19c) < 1)) {
      *(undefined4 *)(param_1 + 0x278) = 0;
      *(undefined4 *)(param_1 + 0x27c) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x280) = 0;
    }
    else {
      pfVar8 = *(float **)(param_1 + 0x1a0);
      fVar4 = *pfVar8;
      fVar5 = pfVar8[1];
      fVar6 = pfVar8[2];
      piVar7 = (int *)FUN_00592920();
      pfVar8 = (float *)(**(code **)(*piVar7 + 0x28))();
      fVar1 = pfVar8[2];
      fVar2 = pfVar8[1];
      *(float *)(param_1 + 0x278) = fVar4 - *pfVar8;
      *(float *)(param_1 + 0x27c) = fVar5 - fVar2;
      *(float *)(param_1 + 0x280) = fVar6 - fVar1;
      *(float *)(param_1 + 0x27c) = *(float *)(param_1 + 0x27c) - _DAT_006e9364;
    }
    break;
  default:
    goto switchD_00595da2_default;
  }
  *(undefined4 *)(param_1 + 0x230) = 0;
switchD_00595da2_default:
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

