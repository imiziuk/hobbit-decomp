
undefined4 __thiscall FUN_00475b20(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

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
  puStack_8 = &LAB_006d1948;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649920(&param_2,s__s_Target_Object_00727cd0,param_2);
  local_4 = 0;
  uVar4 = FUN_00649940();
  uVar2 = param_3;
  iVar5 = FUN_00647e40(param_3,uVar4);
  local_4 = 0xffffffff;
  FUN_00649950();
  if (iVar5 == 0) {
    if ((*param_4 == 0xf) || (*param_4 == 0x10)) {
      *(int *)(param_1 + 0x20) = param_4[0x90];
      *(int *)(param_1 + 0x24) = param_4[0x91];
      uVar6 = 1;
    }
    else {
      uVar6 = 0;
    }
  }
  else {
    FUN_00649920(&param_2,s__s_Target_Location_00727cbc,uVar6);
    bVar1 = true;
    local_4 = 1;
    uVar4 = FUN_00649940();
    iVar5 = FUN_00647e40(uVar2,uVar4);
    piVar3 = param_4;
    if ((iVar5 == 0) && ((*param_4 == 0xf || (*param_4 == 0x10)))) {
      *(int *)(param_1 + 0x28) = param_4[0x90];
      *(int *)(param_1 + 0x2c) = param_4[0x91];
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
      FUN_00649920(&param_4,s__s_Target_Facing_00727ca8,uVar6);
      local_4 = 2;
      uVar4 = FUN_00649940();
      iVar5 = FUN_00647e40(uVar2,uVar4);
      local_4 = 0xffffffff;
      FUN_00649950();
      if (iVar5 == 0) {
        if ((*piVar3 == 0xf) || (*piVar3 == 0x10)) {
          *(int *)(param_1 + 0x30) = piVar3[0x90];
          *(int *)(param_1 + 0x34) = piVar3[0x91];
          uVar6 = 1;
        }
        else {
          uVar6 = 0;
        }
      }
      else {
        FUN_00649920(&param_4,s__s_SetFacing_00727c98,uVar6);
        local_4 = 3;
        uVar4 = FUN_00649940();
        iVar5 = FUN_00647e40(uVar2,uVar4);
        local_4 = 0xffffffff;
        FUN_00649950();
        if (iVar5 == 0) {
          if (*piVar3 == 3) {
            *(int *)(param_1 + 0x38) = piVar3[0x95];
            uVar6 = 1;
          }
          else {
            uVar6 = 0;
          }
        }
        else {
          FUN_00649920(&param_3,s__s_Anim_00727ce4,uVar6);
          local_4 = 4;
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
  }
  ExceptionList = local_c;
  return uVar6;
}

