
void __thiscall FUN_00650400(int param_1,byte *param_2,uint *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte local_4;
  
  iVar2 = *(char *)(param_1 + 0x1d) * 0x7c;
  iVar3 = *(int *)(&DAT_006f6cf4 + iVar2);
  uVar6 = 0;
  if (iVar3 == 0x20) {
    uVar6 = *param_3;
  }
  else if (iVar3 == 0x18) {
    uVar6 = (uint)CONCAT21(CONCAT11((char)*param_3,*(undefined1 *)((int)param_3 + 1)),
                           *(undefined1 *)((int)param_3 + 2));
  }
  else if (iVar3 == 0x10) {
    uVar6 = (uint)(ushort)*param_3;
  }
  uVar4 = ((*(uint *)(&DAT_006f6d38 + iVar2) & uVar6) >>
          ((byte)*(undefined4 *)(&DAT_006f6d10 + iVar2) & 0x1f)) <<
          ((byte)*(undefined4 *)(&DAT_006f6d24 + iVar2) & 0x1f);
  uVar1 = *(undefined4 *)(&DAT_006f6cfc + iVar2);
  uVar5 = ((*(uint *)(&DAT_006f6d3c + iVar2) & uVar6) >>
          ((byte)*(undefined4 *)(&DAT_006f6d14 + iVar2) & 0x1f)) <<
          ((byte)*(undefined4 *)(&DAT_006f6d28 + iVar2) & 0x1f);
  param_3._0_1_ =
       (byte)uVar5 | (byte)(uVar5 >> ((byte)*(undefined4 *)(&DAT_006f6d00 + iVar2) & 0x1f));
  uVar5 = ((*(uint *)(&DAT_006f6d40 + iVar2) & uVar6) >>
          ((byte)*(undefined4 *)(&DAT_006f6d18 + iVar2) & 0x1f)) <<
          ((byte)*(undefined4 *)(&DAT_006f6d2c + iVar2) & 0x1f);
  local_4 = (byte)uVar5 | (byte)(uVar5 >> ((byte)*(undefined4 *)(&DAT_006f6d04 + iVar2) & 0x1f));
  iVar3 = *(int *)(&DAT_006f6d08 + iVar2);
  if (iVar3 == 0) {
    uVar6 = 0xff;
  }
  else {
    uVar6 = ((*(uint *)(&DAT_006f6d44 + iVar2) & uVar6) >>
            ((byte)*(undefined4 *)(&DAT_006f6d1c + iVar2) & 0x1f)) <<
            ((byte)*(undefined4 *)(&DAT_006f6d30 + iVar2) & 0x1f);
    for (; iVar3 < 8; iVar3 = iVar3 * 2) {
      uVar6 = uVar6 | uVar6 >> ((byte)iVar3 & 0x1f);
    }
  }
  param_2[3] = (byte)uVar6;
  param_2[2] = (byte)uVar4 | (byte)(uVar4 >> ((byte)uVar1 & 0x1f));
  param_2[1] = (byte)param_3;
  *param_2 = local_4;
  return;
}

