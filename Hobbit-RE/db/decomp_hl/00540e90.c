
undefined4 __thiscall FUN_00540e90(int param_1,undefined4 param_2,float *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  float10 fVar12;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  undefined1 local_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d933f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_char_anim_player__GetPropL2W_00737cac);
  iVar1 = *(int *)(param_1 + 0x10c + param_4 * 4);
  local_4 = 0;
  if (iVar1 != 0) {
    iVar10 = iVar1 + 4;
    iVar9 = FUN_00549470(iVar10);
    FUN_00549580(iVar10);
    if (iVar9 != 0) {
      iVar9 = FUN_00549470(iVar10);
      FUN_00549580(iVar10);
      iVar9 = *(int *)(iVar1 + 8) * 0x50 + *(int *)(iVar9 + 0x58);
      iVar10 = FUN_00544b30(param_2);
      if (iVar10 != -1) {
        iVar2 = *(int *)(*(int *)(*(int *)(iVar9 + 0x20) + 0x60) + 0x20 +
                        (*(short *)(iVar9 + 0x2c) + iVar10) * 0x24);
        if (*(int *)(param_1 + 300) != 0) {
          FUN_00542230();
        }
        iVar3 = *(int *)(param_1 + 0x130);
        fVar12 = (float10)FUN_0064c6b0(*(undefined4 *)(iVar1 + 0x10),
                                       (float)(*(short *)(iVar9 + 0x24) + -1));
        FUN_0053fa30(*(int *)(iVar9 + 0x20),(float)fVar12,
                     *(int *)(*(int *)(iVar9 + 0x20) + 0x4c) + iVar10,&local_7c);
        fVar7 = local_6c + local_6c;
        fVar6 = local_68 + local_68;
        fVar4 = local_64 * (local_70 + local_70);
        fVar5 = local_70 * (local_70 + local_70);
        *param_3 = (DAT_006e92e8 - (local_68 * fVar6 + fVar7 * local_6c)) * local_7c;
        param_3[1] = (local_70 * fVar7 + local_64 * fVar6) * local_7c;
        param_3[2] = (local_70 * fVar6 - local_64 * fVar7) * local_7c;
        param_3[4] = (local_70 * fVar7 - local_64 * fVar6) * local_78;
        fVar8 = DAT_006e92e8 - (local_68 * fVar6 + fVar5);
        param_3[0xc] = local_60;
        param_3[5] = fVar8 * local_78;
        param_3[0xd] = local_5c;
        param_3[0xe] = local_58;
        param_3[3] = 0.0;
        param_3[7] = 0.0;
        param_3[0xb] = 0.0;
        param_3[0xf] = 1.0;
        param_3[6] = (fVar4 + fVar6 * local_6c) * local_78;
        param_3[8] = (local_70 * fVar6 + local_64 * fVar7) * local_74;
        param_3[9] = (fVar6 * local_6c - fVar4) * local_74;
        param_3[10] = (DAT_006e92e8 - (fVar7 * local_6c + fVar5)) * local_74;
        uVar11 = FUN_0064e040(local_4c,iVar2 * 0x40 + iVar3,param_3);
        FUN_00406570(uVar11);
        local_4 = 0xffffffff;
        FUN_00649720();
        ExceptionList = local_c;
        return 1;
      }
      param_3[0xc] = 0.0;
      param_3[8] = 0.0;
      param_3[4] = 0.0;
      param_3[0xd] = 0.0;
      param_3[9] = 0.0;
      param_3[1] = 0.0;
      param_3[0xe] = 0.0;
      param_3[6] = 0.0;
      param_3[2] = 0.0;
      param_3[0xb] = 0.0;
      param_3[7] = 0.0;
      param_3[3] = 0.0;
      *param_3 = 1.0;
      param_3[5] = 1.0;
      param_3[10] = 1.0;
      param_3[0xf] = 1.0;
    }
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return 0;
}

