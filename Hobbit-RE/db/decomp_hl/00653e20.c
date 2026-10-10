
void __thiscall FUN_00653e20(int *param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int local_1c;
  undefined4 local_18;
  int local_8;
  
  iVar2 = *(char *)((int)param_1 + 0x1d) * 0x7c;
  iVar9 = param_2 * 0x7c;
  if (param_2 != *(char *)((int)param_1 + 0x1d)) {
    uVar7 = 0;
    iVar8 = 0;
    local_18 = 0;
    local_8 = 0;
    local_1c = 0;
    if ((*(byte *)((int)param_1 + 0x1b) & 1) != 0) {
      FUN_006510d0();
    }
    if ((*(byte *)((int)param_1 + 0x1b) & 2) != 0) {
      FUN_00651260();
    }
    iVar5 = (int)(short)param_1[6] * (int)*(short *)((int)param_1 + 0x16);
    iVar3 = *(int *)(&DAT_006f6cf0 + iVar9) * iVar5 >> 3;
    iVar4 = thunk_FUN_0064ff70(iVar3,s_C__projects_meridian_xCore_x_fil_0074d890,0x265);
    if ((char)param_1[7] == '\0') {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)*param_1;
    }
    iVar6 = *param_1 + iVar6;
    if (*(int *)(&DAT_006f6cec + iVar2) != 0) {
      local_1c = param_1[3] / (*(int *)(&DAT_006f6cf4 + iVar2) >> 3);
      uVar7 = FUN_006541e0(param_1[1],(int)*(char *)((int)param_1 + 0x1d),local_1c);
    }
    if (*(int *)(&DAT_006f6cec + iVar2) == 0) {
      local_18 = FUN_006541e0(iVar6,(int)*(char *)((int)param_1 + 0x1d),iVar5);
    }
    if ((*(int *)(&DAT_006f6cec + iVar2) == 0) && (*(int *)(&DAT_006f6cec + iVar9) != 0)) {
      local_1c = ((7 < *(int *)(&DAT_006f6cf0 + iVar9)) - 1 & 0xffffff10) + 0x100;
      uVar7 = thunk_FUN_0064ff70(local_1c * 4,s_C__projects_meridian_xCore_x_fil_0074d8d8,0x28e);
      FUN_00656740();
      FUN_00656770(local_18,iVar5);
      FUN_006568e0(uVar7,local_1c,0 < *(int *)(&DAT_006f6d08 + iVar9));
    }
    if ((*(int *)(&DAT_006f6cec + iVar2) != 0) && (*(int *)(&DAT_006f6cec + iVar9) == 0)) {
      local_18 = FUN_006546f0(iVar6,uVar7,*(undefined4 *)(&DAT_006f6cf0 + iVar2),iVar5);
      FUN_0064ff40(uVar7,s_C__projects_meridian_xCore_x_fil_0074d920,0x2a3);
    }
    if (*(int *)(&DAT_006f6cec + iVar9) == 0) {
      FUN_00654510(iVar4,param_2,local_18,iVar5);
      FUN_0064ff40(local_18,s_C__projects_meridian_xCore_x_fil_0074d968,0x2b4);
    }
    if ((*(int *)(&DAT_006f6cec + iVar2) != 0) && (*(int *)(&DAT_006f6cec + iVar9) != 0)) {
      FUN_00654840(iVar4,*(undefined4 *)(&DAT_006f6cf0 + iVar9),iVar6,
                   *(undefined4 *)(&DAT_006f6cf0 + iVar2),iVar5);
      if ((*(int *)(&DAT_006f6cf0 + iVar2) == 8) && (*(int *)(&DAT_006f6cf0 + iVar9) == 4)) {
        local_1c = 0x10;
      }
    }
    if ((*(int *)(&DAT_006f6cec + iVar2) == 0) && (*(int *)(&DAT_006f6cec + iVar9) != 0)) {
      iVar8 = *(int *)(&DAT_006f6cf4 + iVar9) * local_1c >> 3;
      local_8 = thunk_FUN_0064ff70(iVar8,s_C__projects_meridian_xCore_x_fil_0074d9b0,0x2d0);
      FUN_00654510(local_8,param_2,uVar7,local_1c);
      FUN_00656550(uVar7,local_1c,0 < *(int *)(&DAT_006f6d08 + iVar9));
      FUN_006547d0(iVar4,*(undefined4 *)(&DAT_006f6cf0 + iVar9),local_18,iVar5);
      FUN_006566f0();
      FUN_0064ff40(local_18,s_C__projects_meridian_xCore_x_fil_0074d9f8,0x2df);
      FUN_0064ff40(uVar7,s_C__projects_meridian_xCore_x_fil_0074da40,0x2e0);
    }
    if ((*(int *)(&DAT_006f6cec + iVar2) != 0) && (*(int *)(&DAT_006f6cec + iVar9) != 0)) {
      iVar8 = (1 << ((byte)*(undefined4 *)(&DAT_006f6cf0 + iVar9) & 0x1f)) *
              *(int *)(&DAT_006f6cf4 + iVar9) >> 3;
      local_8 = thunk_FUN_0064ff70(iVar8,s_C__projects_meridian_xCore_x_fil_0074da88,0x2ef);
      FUN_00654510(local_8,param_2,uVar7,local_1c);
      FUN_0064ff40(uVar7,s_C__projects_meridian_xCore_x_fil_0074dad0,0x2f6);
    }
    if ((*(byte *)((int)param_1 + 0x1a) & 2) != 0) {
      FUN_0064ff40(*param_1,s_C__projects_meridian_xCore_x_fil_0074db18,0x301);
    }
    if (((*(byte *)((int)param_1 + 0x1a) & 4) != 0) && (param_1[1] != 0)) {
      FUN_0064ff40(param_1[1],s_C__projects_meridian_xCore_x_fil_0074db60,0x305);
    }
    *(ushort *)((int)param_1 + 0x1a) = *(ushort *)((int)param_1 + 0x1a) | 2;
    *param_1 = iVar4;
    param_1[2] = iVar3;
    *(undefined1 *)(param_1 + 7) = 0;
    iVar2 = 0;
    if (*(int *)(&DAT_006f6cec + iVar9) == 0) {
      param_1[3] = 0;
      uVar1 = *(ushort *)((int)param_1 + 0x1a) & 0xfffb;
    }
    else {
      param_1[3] = iVar8;
      uVar1 = *(ushort *)((int)param_1 + 0x1a) | 4;
      iVar2 = local_8;
    }
    param_1[1] = iVar2;
    *(ushort *)((int)param_1 + 0x1a) = uVar1;
    *(undefined1 *)((int)param_1 + 0x1d) = (undefined1)param_2;
  }
  return;
}

