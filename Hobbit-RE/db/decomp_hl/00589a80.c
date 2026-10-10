
void __thiscall FUN_00589a80(int param_1,float param_2)

{
  int *piVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int extraout_ECX;
  int iVar8;
  int iVar9;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dcad0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_modifier_mgr__OnAdvanceLogic_00741e48);
  sVar2 = *(short *)(param_1 + 0xc);
  local_4 = 0;
  *(float *)(param_1 + 0x10) = param_2 + *(float *)(param_1 + 0x10);
  iVar7 = param_1;
  do {
    while( true ) {
      if (sVar2 == -1) {
        local_4 = 0xffffffff;
        FUN_00649720();
        ExceptionList = local_c;
        return;
      }
      iVar8 = (int)sVar2;
      uVar3 = *(uint *)(iVar8 * 0x68 + 100 + *(int *)(iVar7 + 8));
      iVar9 = iVar8 * 0x68 + *(int *)(iVar7 + 8);
      sVar2 = *(short *)(iVar9 + 0x48);
      uVar4 = *(uint *)(iVar9 + 0x60);
      if (uVar4 != 0 || uVar3 != 0) break;
LAB_00589bcf:
      fVar5 = (*(float *)(iVar7 + 0x10) - *(float *)(iVar9 + 0x4c)) / *(float *)(iVar9 + 0x50);
      if (fVar5 < DAT_006e92e8) {
        if (*(int *)(iVar9 + 0x58) != 0) {
          FUN_005895a0(iVar9,fVar5);
        }
      }
      else {
        FUN_005895a0(iVar9,0x3f800000);
        FUN_005891e0(iVar8);
      }
    }
    FUN_00649600(s_obj_mgr__LockObjectEvenIfDeactiv_0071d1b4);
    iVar6 = (int)*(short *)(&DAT_0076cd88 + ((uVar4 ^ uVar3) * -0xfb & 0xfff) * 2);
    for (iVar7 = iVar6; iVar7 != -1; iVar7 = (int)*(short *)(DAT_0076f648 + iVar7 * 0x14 + 0xe)) {
    }
    if (iVar6 == -1) {
LAB_00589b8c:
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00649720();
    }
    else {
      do {
        piVar1 = (int *)(DAT_0076f648 + iVar6 * 0x14);
        iVar7 = *piVar1;
        if (((iVar7 != 0) && (*(uint *)(iVar7 + 8) == uVar4)) && (*(uint *)(iVar7 + 0xc) == uVar3))
        {
          if (iVar6 == -1) goto LAB_00589b8c;
          iVar6 = *(int *)(DAT_0076f648 + iVar6 * 0x14);
          local_4 = (uint)local_4._1_3_ << 8;
          FUN_00649720();
          iVar7 = param_1;
          if (iVar6 != 0) goto LAB_00589bcf;
          goto LAB_00589bb5;
        }
        iVar6 = (int)*(short *)((int)piVar1 + 0xe);
      } while (iVar6 != -1);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00649720();
    }
LAB_00589bb5:
    FUN_005891e0(iVar8);
    iVar7 = extraout_ECX;
  } while( true );
}

