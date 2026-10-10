
void __thiscall FUN_0058bb40(int param_1,ushort *param_2)

{
  int *piVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ushort uVar8;
  ushort *puVar9;
  ushort *puVar10;
  int local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dcbb8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_sdbase__ReleaseLinks_00742050);
  uVar2 = *param_2;
  local_4 = 0;
  if (uVar2 == 0xffff) {
    local_4 = 0xffffffff;
    FUN_00649720();
    ExceptionList = local_c;
    return;
  }
  local_24 = 0;
  uVar3 = 0;
  do {
    uVar4 = (uint)uVar2;
    if (uVar4 == 0xffff) {
      *(undefined2 *)
       (*(int *)(param_1 + 0x20c + ((int)uVar3 >> 10) * 4) + 6 + (uVar3 & 0x3ff) * 0xc) =
           *(undefined2 *)(param_1 + 0x414);
      *(ushort *)(param_1 + 0x414) = *param_2;
      *param_2 = 0xffff;
      *(int *)(param_1 + 0x40c) = *(int *)(param_1 + 0x40c) - local_24;
      local_4 = 0xffffffff;
      FUN_00649720();
      ExceptionList = local_c;
      return;
    }
    piVar1 = (int *)(param_1 + 0x20c + ((int)uVar4 >> 10) * 4);
    local_24 = local_24 + 1;
    iVar5 = *piVar1;
    iVar6 = (uVar4 & 0x3ff) * 0xc;
    uVar2 = *(ushort *)(iVar5 + 4 + iVar6);
    puVar10 = (ushort *)(iVar5 + iVar6);
    if (uVar2 == 0xffff) {
      iVar5 = 0;
    }
    else {
      iVar5 = (uVar2 & 0x1ff) * 0x1c + *(int *)(param_1 + (uint)(uVar2 >> 9) * 4);
    }
    *(short *)(iVar5 + 0xe) = *(short *)(iVar5 + 0xe) + -1;
    uVar2 = *puVar10;
    if (uVar2 != 0xffff) {
      *(ushort *)
       (*(int *)(param_1 + 0x20c + ((int)(uint)uVar2 >> 10) * 4) + 2 + (uVar2 & 0x3ff) * 0xc) =
           puVar10[1];
    }
    uVar2 = puVar10[1];
    if (uVar2 == 0xffff) {
      uVar2 = puVar10[2];
      if (uVar2 == 0xffff) {
        iVar5 = 0;
      }
      else {
        iVar5 = (uVar2 & 0x1ff) * 0x1c + *(int *)(param_1 + (uint)(uVar2 >> 9) * 4);
      }
      iVar7 = 0;
      puVar9 = (ushort *)(iVar5 + 0x12);
      do {
        if (*puVar9 == uVar4) break;
        iVar7 = iVar7 + 1;
        puVar9 = puVar9 + 1;
      } while (iVar7 < 4);
      uVar8 = *puVar10;
      if (0xf000 < uVar8) {
        uVar8 = 0xffff;
      }
      *puVar10 = uVar8;
      *(ushort *)(iVar5 + 0x12 + iVar7 * 2) = uVar8;
      if ((*(short *)(iVar5 + 0xe) == 0) &&
         (uVar2 != *(ushort *)(*(short *)(iVar5 + 0x10) * 0xfb8 + 0x13d2 + param_1))) {
        FUN_0058a500(uVar2);
      }
    }
    else {
      *(ushort *)(*(int *)(param_1 + 0x20c + ((int)(uint)uVar2 >> 10) * 4) + (uVar2 & 0x3ff) * 0xc)
           = *puVar10;
    }
    puVar10[4] = 0;
    puVar10[5] = 0;
    uVar2 = *(ushort *)(iVar6 + 6 + *piVar1);
    uVar3 = uVar4;
  } while( true );
}

