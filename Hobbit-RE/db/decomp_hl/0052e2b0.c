
undefined4 __thiscall FUN_0052e2b0(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_164;
  int local_160;
  int local_15c;
  undefined4 local_158 [11];
  undefined1 local_12c [44];
  undefined1 local_100 [168];
  undefined1 local_58 [76];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d83af;
  local_c = ExceptionList;
  if (-1 < param_2) {
    ExceptionList = &local_c;
    iVar3 = FUN_0052e130();
    if (iVar3 <= param_2) {
      FUN_0052eb20(local_12c);
      local_4 = 0;
      FUN_00530ad0(local_12c);
      local_4._0_1_ = 1;
      FUN_00530aa0();
      local_4._0_1_ = 2;
      FUN_0064a320(local_12c);
      FUN_0052f9a0(param_1[4],1,local_100);
      param_2 = FUN_0052e130();
      param_2 = param_2 + -1;
      local_4._0_1_ = 3;
      FUN_0064b190();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00649ba0();
      local_4 = 0xffffffff;
      FUN_00649ba0();
    }
    uVar4 = FUN_0052e990(local_58);
    param_2 = param_2 * 0xa8;
    local_4 = 4;
    FUN_0064b7f0(uVar4);
    local_4 = 0xffffffff;
    FUN_0064b190();
    FUN_0055a960();
    FUN_005905f0(param_1,&local_164);
    FUN_006c0bb4(&local_15c);
    iVar3 = param_1[3];
    uVar4 = FUN_0052a650();
    *(undefined4 *)(param_2 + 0x78 + iVar3) = uVar4;
    *(undefined4 *)(param_2 + 0x7c + param_1[3]) = param_1[0x31];
    *(undefined4 *)(param_2 + 0x80 + param_1[3]) = param_1[0x32];
    iVar3 = param_1[3];
    FUN_00434ca0(4);
    uVar2 = __ftol();
    *(undefined2 *)(param_2 + 0x84 + iVar3) = uVar2;
    iVar3 = param_1[3];
    FUN_00434c10();
    uVar2 = __ftol();
    *(undefined2 *)(param_2 + 0x86 + iVar3) = uVar2;
    iVar3 = param_1[3];
    FUN_00434ca0(9);
    uVar2 = __ftol();
    *(undefined2 *)(param_2 + 0x88 + iVar3) = uVar2;
    iVar3 = param_1[3];
    FUN_00434ca0(8);
    uVar2 = __ftol();
    *(undefined2 *)(param_2 + 0x8a + iVar3) = uVar2;
    iVar3 = param_1[3];
    FUN_00434ca0(1);
    uVar2 = __ftol();
    *(undefined2 *)(param_2 + 0x92 + iVar3) = uVar2;
    *(undefined4 *)(param_2 + 0x8c + param_1[3]) = 0;
    iVar3 = param_1[3];
    FUN_0041bcc0();
    uVar2 = FUN_00422450();
    *(undefined2 *)(param_2 + 0x90 + iVar3) = uVar2;
    iVar3 = param_1[3];
    FUN_00434ca0(6);
    uVar4 = __ftol();
    *(undefined4 *)(param_2 + 0x94 + iVar3) = uVar4;
    *(undefined4 *)(param_2 + 0x98 + param_1[3]) = local_164;
    iVar3 = param_1[3];
    *(int *)(param_2 + 0xa0 + iVar3) = local_15c;
    *(int *)(param_2 + 0xa4 + iVar3) = local_15c >> 0x1f;
    FUN_0064a670(local_158,param_1 + 0x26,param_2 + param_1[3]);
    local_4 = 5;
    iVar3 = FUN_0064f210(local_158[0],&DAT_00720e08);
    if (iVar3 != 0) {
      iVar1 = param_1[3];
      local_160 = *(int *)(param_2 + 0x70 + iVar1);
      FUN_0064f420(&local_160,4,1,iVar3);
      FUN_0064f420(*(undefined4 *)(param_2 + 0x2c + iVar1),2,local_160 + 1,iVar3);
      FUN_0064f420(param_2 + 0x78 + param_1[3],1,0x30,iVar3);
      FUN_0064f420(*param_1,1,local_164,iVar3);
      FUN_0064f2b0(iVar3);
      FUN_0052f3a0();
      FUN_0064a210(".hobbit",&DAT_0075b6e0,0);
      DAT_00760100 = 0;
      FUN_004fce70(local_158[0]);
      local_4 = 0xffffffff;
      FUN_00649ba0();
      ExceptionList = local_c;
      return 1;
    }
    local_4 = 0xffffffff;
    FUN_00649ba0();
  }
  ExceptionList = local_c;
  return 0;
}

