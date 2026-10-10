
undefined4 __thiscall FUN_00476c60(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  bool bVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar6 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d1ac0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649920(&param_2,s__s_Speaker_00727dd4,param_2);
  local_4 = 0;
  uVar4 = FUN_00649940();
  uVar2 = param_3;
  iVar5 = FUN_00647e40(param_3,uVar4);
  piVar3 = param_4;
  if ((iVar5 == 0) && ((*param_4 == 0xf || (*param_4 == 0x10)))) {
    *(int *)(param_1 + 0x20) = param_4[0x90];
    *(int *)(param_1 + 0x24) = param_4[0x91];
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  if (bVar1) {
    uVar6 = 1;
  }
  else {
    FUN_00649920(&param_2,s__s_Force_End_After_Duration_Expi_00727db0,uVar6);
    local_4 = 1;
    uVar4 = FUN_00649940();
    iVar5 = FUN_00647e40(uVar2,uVar4);
    local_4 = 0xffffffff;
    FUN_00649950();
    if (iVar5 == 0) {
      if (*piVar3 == 3) {
        *(int *)(param_1 + 0x58) = piVar3[0x95];
        uVar6 = 1;
      }
      else {
        uVar6 = 0;
      }
    }
    else {
      FUN_00649920(&param_2,s__s_Play_Sound_at_Speaker_Positio_00727dec,uVar6);
      local_4 = 2;
      uVar4 = FUN_00649940();
      iVar5 = FUN_00647e40(uVar2,uVar4);
      local_4 = 0xffffffff;
      FUN_00649950();
      if (iVar5 == 0) {
        if (*piVar3 == 3) {
          *(int *)(param_1 + 0x5c) = piVar3[0x95];
          uVar6 = 1;
        }
        else {
          uVar6 = 0;
        }
      }
      else {
        FUN_00649920(&param_3,s__s_Sample_00727de0,uVar6);
        local_4 = 3;
        uVar4 = FUN_00649940();
        iVar5 = FUN_00647e40(uVar2,uVar4);
        local_4 = 0xffffffff;
        FUN_00649950();
        if (iVar5 == 0) {
          if ((*piVar3 == 0xd) || (*piVar3 == 4)) {
            FUN_0064a2e0(piVar3 + 2);
            uVar6 = 1;
          }
          else {
            uVar6 = 0;
          }
        }
        else {
          uVar6 = FUN_00474b30(uVar6,uVar2,piVar3);
        }
      }
    }
  }
  ExceptionList = local_c;
  return uVar6;
}

