
void __thiscall FUN_006be7c0(int param_1,float *param_2)

{
  int iVar1;
  undefined4 uVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfStack_c8;
  float fStack_b4;
  float fStack_b0;
  undefined1 *puStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  undefined4 uStack_9c;
  float afStack_98 [3];
  float afStack_8c [7];
  undefined4 uStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined1 auStack_4c [64];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e856b;
  pvStack_c = ExceptionList;
  pfStack_c8 = (float *)s_fx_sphere__Render_00757d50;
  ExceptionList = &pvStack_c;
  FUN_00649600();
  local_4 = 0;
  pfStack_c8 = (float *)0x6be806;
  iVar1 = (**(code **)((int)*param_2 + 8))();
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 4);
    pfStack_c8 = &fStack_a8;
    FUN_0064c8e0(*(undefined4 *)(param_1 + 0x18),&puStack_ac);
    FUN_0064c8e0(*(undefined4 *)(param_1 + 0x1c),&fStack_b4,&fStack_b0);
    FUN_0064c8e0(*(undefined4 *)(param_1 + 0x20),&fStack_a4,&fStack_a0);
    afStack_8c[0] =
         (fStack_a0 * fStack_b0 + fStack_a4 * (float)puStack_ac * fStack_b4) *
         *(float *)(param_1 + 0xc);
    afStack_8c[1] = fStack_a4 * fStack_a8 * *(float *)(param_1 + 0xc);
    afStack_8c[2] =
         (fStack_a4 * (float)puStack_ac * fStack_b0 - fStack_a0 * fStack_b4) *
         *(float *)(param_1 + 0xc);
    afStack_8c[4] =
         (fStack_b4 * fStack_a0 * (float)puStack_ac - fStack_a4 * fStack_b0) *
         *(float *)(param_1 + 0x10);
    afStack_8c[5] = fStack_a0 * fStack_a8 * *(float *)(param_1 + 0x10);
    afStack_8c[6] =
         (fStack_a0 * (float)puStack_ac * fStack_b0 + fStack_a4 * fStack_b4) *
         *(float *)(param_1 + 0x10);
    fStack_6c = fStack_b4 * fStack_a8 * *(float *)(param_1 + 0x14);
    fStack_68 = -(float)puStack_ac * *(float *)(param_1 + 0x14);
    uStack_5c = *(undefined4 *)(param_1 + 0x24);
    uStack_58 = *(undefined4 *)(param_1 + 0x28);
    uStack_54 = *(undefined4 *)(param_1 + 0x2c);
    fStack_64 = fStack_b0 * fStack_a8 * *(float *)(param_1 + 0x14);
    pfStack_c8 = afStack_8c;
    afStack_8c[3] = 0.0;
    uStack_70 = 0;
    uStack_60 = 0;
    uStack_50 = 0x3f800000;
    uVar2 = FUN_006ba140();
    pfVar3 = (float *)FUN_0064e040(auStack_4c,uVar2);
    if ((afStack_8c != pfVar3) && (pfVar3 != pfVar3 + 0x10)) {
      pfVar6 = afStack_8c + 2;
      pfVar4 = pfVar3;
      do {
        pfVar5 = pfVar4 + 4;
        pfVar6[-2] = *pfVar4;
        pfVar6[-1] = pfVar4[1];
        *pfVar6 = *(float *)(((int)pfVar3 - (int)afStack_8c) + (int)pfVar6);
        pfVar6[1] = pfVar4[3];
        pfVar6 = pfVar6 + 4;
        pfVar4 = pfVar5;
      } while (pfVar5 != pfVar3 + 0x10);
    }
    pfStack_c8 = afStack_98;
    uStack_9c = 0;
    afStack_98[0] = 0.0;
    FUN_006ba340(*(undefined4 *)(iVar1 + 0x80),&uStack_9c);
    pfVar3 = (float *)0x20000026;
    if (0 < *(int *)(iVar1 + 0xc)) {
      pfVar3 = (float *)0x200000a6;
    }
    if (*(int *)(iVar1 + 0xc) < 0) {
      pfVar3 = (float *)((uint)pfVar3 | 0x100);
    }
    if (*(int *)(iVar1 + 8) == 0) {
      pfVar3 = (float *)((uint)pfVar3 | 0x10);
    }
    pfStack_c8 = pfVar3;
    FUN_0066c3a0(4);
    FUN_0066db80(uStack_9c,0);
    FUN_0066d9c0(afStack_8c);
    FUN_0066e100(*(undefined4 *)(param_1 + 0xcc),*(undefined4 *)(param_1 + 0xb4),8);
    FUN_0066e150(*(undefined4 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xb4),4);
    FUN_0066e180(*(undefined4 *)(param_1 + 200),*(undefined4 *)(param_1 + 0xb4),0xc);
    FUN_0066e550(*(undefined4 *)(param_1 + 0xd4),*(undefined4 *)(param_1 + 0xac));
    pfStack_c8 = (float *)0x6bea41;
    FUN_0066d9a0();
    if (*(int *)(param_1 + 0xb0) != 0) {
      pfStack_c8 = pfVar3;
      FUN_0066c3a0(3);
      FUN_0066db80(uStack_9c,0);
      FUN_0066d9c0(afStack_8c);
      FUN_0066e100(*(undefined4 *)(param_1 + 0xcc),*(undefined4 *)(param_1 + 0xb4),8);
      FUN_0066e150(*(undefined4 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xb4),4);
      FUN_0066e180(*(undefined4 *)(param_1 + 200),*(undefined4 *)(param_1 + 0xb4),0xc);
      FUN_0066e550(*(undefined4 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xb0));
      pfStack_c8 = (float *)0x6beac0;
      FUN_0066d9a0();
    }
    if (DAT_00815ca4 != 0) {
      pfStack_c8 = (float *)0x20000008;
      FUN_0066c3a0(4);
      FUN_0066d9c0(afStack_8c);
      puStack_ac = (undefined1 *)&pfStack_c8;
      pfStack_c8 = (float *)0xff0000ff;
      FUN_0066ddd0();
      FUN_0066e180(*(undefined4 *)(param_1 + 200),*(undefined4 *)(param_1 + 0xb4),0xc);
      FUN_0066e550(*(undefined4 *)(param_1 + 0xd4),*(undefined4 *)(param_1 + 0xac));
      pfStack_c8 = (float *)0x6beb29;
      FUN_0066d9a0();
    }
    pfStack_c8 = param_2;
    FUN_006bb1e0();
  }
  local_4 = 0xffffffff;
  pfStack_c8 = (float *)0x6beb4c;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

