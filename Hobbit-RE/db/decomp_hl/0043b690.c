
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_0043b690(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  uVar3 = 0xffffffff;
  if ((_DAT_006e97f0 <= *(float *)(param_1 + 0xa70)) &&
     (*(float *)(param_1 + 0xa70) < _DAT_006e97f4 !=
      (NAN(*(float *)(param_1 + 0xa70)) || NAN(_DAT_006e97f4)))) {
    uVar1 = FUN_00647b10(0,4);
    switch(uVar1) {
    case 0:
      goto switchD_0043b6db_caseD_0;
    case 1:
      goto switchD_0043b6db_caseD_1;
    case 2:
      goto switchD_0043b6db_caseD_2;
    case 3:
      goto switchD_0043b6db_caseD_3;
    case 4:
      goto switchD_0043b6db_caseD_4;
    default:
      goto switchD_0043b6db_default;
    }
  }
  if ((_DAT_006e97f4 <= *(float *)(param_1 + 0xa70)) &&
     (*(float *)(param_1 + 0xa70) < _DAT_006e97f8 !=
      (NAN(*(float *)(param_1 + 0xa70)) || NAN(_DAT_006e97f8)))) {
    uVar1 = FUN_00647b10(0,4);
    switch(uVar1) {
    case 0:
switchD_0043b6db_caseD_0:
      FUN_00549470(param_1 + 0x454);
      FUN_00549580(param_1 + 0x454);
      pcVar4 = s_fidget_scratch_00724118;
      break;
    case 1:
switchD_0043b6db_caseD_1:
      FUN_00549470(param_1 + 0x454);
      FUN_00549580(param_1 + 0x454);
      pcVar4 = s_fidget_look_0072410c;
      break;
    case 2:
switchD_0043b6db_caseD_2:
      FUN_00549470(param_1 + 0x454);
      FUN_00549580(param_1 + 0x454);
      pcVar4 = s_fidget_yawn_00724100;
      break;
    case 3:
switchD_0043b6db_caseD_3:
      FUN_00549470(param_1 + 0x454);
      FUN_00549580(param_1 + 0x454);
      pcVar4 = s_fidget_scratch_leg_007240ec;
      break;
    case 4:
switchD_0043b6db_caseD_4:
      FUN_00549470(param_1 + 0x454);
      FUN_00549580(param_1 + 0x454);
      pcVar4 = s_fidget_stretch_007240dc;
      break;
    default:
      goto switchD_0043b6db_default;
    }
    uVar3 = FUN_0053cc70(pcVar4);
switchD_0043b6db_default:
    if (((*(int *)(param_1 + 0x3c0) != 0) || (*(int *)(param_1 + 0x3d0) != 0)) &&
       (iVar2 = FUN_00647b10(0,9), iVar2 < 5)) {
      if (*(int *)(param_1 + 0x3c0) == 0) {
        if ((*(int *)(param_1 + 0x3d0) != 0) &&
           ((iVar2 = FUN_00647b10(0,1), iVar2 == 0 || (iVar2 == 1)))) {
          FUN_00549470(param_1 + 0x454);
          FUN_00549580(param_1 + 0x454);
          uVar3 = FUN_0053cc70(s_fidget_staff_stretch_007240b0);
        }
      }
      else {
        iVar2 = FUN_00647b10(0,1);
        if ((iVar2 == 0) || (iVar2 == 1)) {
          FUN_00549470(param_1 + 0x454);
          FUN_00549580(param_1 + 0x454);
          uVar3 = FUN_0053cc70(s_fidget_sting_throw_007240c8);
          return uVar3;
        }
      }
    }
    return uVar3;
  }
  if (*(float *)(param_1 + 0xa70) < _DAT_006e97f8) {
    return 0xffffffff;
  }
  if (*(float *)(param_1 + 0xa70) < _DAT_006e97fc ==
      (NAN(*(float *)(param_1 + 0xa70)) || NAN(_DAT_006e97fc))) {
    return 0xffffffff;
  }
  uVar1 = FUN_00647b10(0,4);
  switch(uVar1) {
  case 0:
    goto switchD_0043b6db_caseD_0;
  case 1:
    goto switchD_0043b6db_caseD_1;
  case 2:
    goto switchD_0043b6db_caseD_2;
  case 3:
    goto switchD_0043b6db_caseD_3;
  case 4:
    goto switchD_0043b6db_caseD_4;
  default:
    goto switchD_0043b6db_default;
  }
}

