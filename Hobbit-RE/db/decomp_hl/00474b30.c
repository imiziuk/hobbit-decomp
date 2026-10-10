
undefined4 __thiscall FUN_00474b30(int param_1,float param_2,undefined4 param_3,int *param_4)

{
  bool bVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined2 uVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar6 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d17d0;
  local_c = ExceptionList;
  uVar7 = *(undefined2 *)(param_1 + 0xe);
  ExceptionList = &local_c;
  FUN_00649920(&param_2,s__s_Shot_00727bd4,param_2);
  bVar1 = false;
  local_4 = 0;
  uVar4 = FUN_00649940();
  uVar2 = param_3;
  iVar5 = FUN_00647e40(param_3,uVar4);
  if ((iVar5 == 0) && (*param_4 == 1)) {
    uVar7 = (undefined2)param_4[0x93];
    bVar1 = true;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  if (!bVar1) {
    FUN_00649920(&param_2,s__s_Offset_00727bc8,uVar6);
    local_4 = 1;
    uVar4 = FUN_00649940();
    iVar5 = FUN_00647e40(uVar2,uVar4);
    local_4 = 0xffffffff;
    FUN_00649950();
    if (iVar5 == 0) {
      if (*param_4 == 2) {
        *(int *)(param_1 + 4) = param_4[0x94];
        ExceptionList = local_c;
        return 1;
      }
    }
    else {
      param_2 = 0.0;
      FUN_00649920(&param_3,s__s_Duration_00727bbc,uVar6);
      local_4 = 2;
      uVar4 = FUN_00649940();
      iVar5 = FUN_00647e40(uVar2,uVar4);
      piVar3 = param_4;
      if ((iVar5 == 0) && (*param_4 == 2)) {
        param_2 = (float)param_4[0x94];
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      local_4 = 0xffffffff;
      FUN_00649950();
      if (bVar1) {
        if ((NAN(param_2) || NAN(DAT_006e92e4)) == (param_2 == DAT_006e92e4)) {
          *(float *)(param_1 + 8) = param_2;
        }
        ExceptionList = local_c;
        return 1;
      }
      FUN_00649920(&param_4,s__s_Done_00727bb4,uVar6);
      local_4 = 3;
      uVar6 = FUN_00649940();
      iVar5 = FUN_00647e40(uVar2,uVar6);
      local_4 = 0xffffffff;
      FUN_00649950();
      if ((iVar5 == 0) && (*piVar3 == 3)) {
        *(ushort *)(param_1 + 0x10) =
             (byte)((char)piVar3[0x95] << 2 ^ (byte)*(ushort *)(param_1 + 0x10)) & 4 ^
             *(ushort *)(param_1 + 0x10);
        ExceptionList = local_c;
        return 1;
      }
    }
    ExceptionList = local_c;
    return 0;
  }
  *(undefined2 *)(param_1 + 0xe) = uVar7;
  ExceptionList = local_c;
  return 1;
}

