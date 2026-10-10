
void __fastcall FUN_005c3a90(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  undefined1 *local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  void *pvStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006df588;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_render_task_mgr__RenderUnsorted_00745f94);
  iVar5 = 0;
  local_4 = 0;
  puVar3 = (undefined1 *)FUN_00583210(0);
  puVar4 = (undefined1 *)(param_1 + 0x60);
  *(undefined1 *)(param_1 + 99) = puVar3[3];
  *(undefined1 *)(param_1 + 0x62) = puVar3[2];
  *(undefined1 *)(param_1 + 0x61) = puVar3[1];
  *puVar4 = *puVar3;
  local_70 = puVar4;
  FUN_0064cbe0();
  FUN_0064cc30();
  FUN_0064cc00();
  (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0xe,1);
  puVar3 = (undefined1 *)0x17;
  (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x17,4);
  (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,7,1);
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x58)) {
    do {
      FUN_005c3ef0(*(undefined4 *)(*(int *)(param_1 + 0x4c) + iVar6 * 4),0);
      FUN_005c3ef0(*(undefined4 *)(*(int *)(param_1 + 0x4c) + iVar6 * 4),1);
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(param_1 + 0x58));
  }
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x58)) {
    do {
      FUN_005c3ef0(*(undefined4 *)(*(int *)(param_1 + 0x4c) + iVar6 * 4),2);
      FUN_005c3ef0(*(undefined4 *)(*(int *)(param_1 + 0x4c) + iVar6 * 4),3);
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(param_1 + 0x58));
  }
  if (0 < *(int *)(param_1 + 0x58)) {
    do {
      puVar4 = puVar3;
      iVar6 = 0;
      do {
        iVar2 = *(int *)(param_1 + 0x30);
        iVar1 = iVar6 + *(int *)(*(int *)(param_1 + 0x4c) + iVar5 * 4) * 9;
        FUN_005c41e0(*(undefined4 *)(iVar2 + 0x10 + iVar1 * 4),0xffffff);
        iVar6 = iVar6 + 1;
        *(undefined4 *)(iVar2 + 0x10 + iVar1 * 4) = 0;
      } while (iVar6 < 4);
      iVar5 = iVar5 + 1;
      puVar3 = puVar4;
    } while (iVar5 < *(int *)(param_1 + 0x58));
  }
  FUN_0064cc50();
  uStack_40 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  pvStack_3c = (void *)0x0;
  uStack_4c = 0;
  local_6c = 0;
  uStack_38 = 0;
  uStack_58 = 0;
  uStack_68 = 0;
  uStack_44 = 0;
  uStack_54 = 0;
  local_64 = 0;
  local_70 = (undefined1 *)0x3f800000;
  uStack_5c = 0x3f800000;
  uStack_48 = 0x3f800000;
  uStack_34 = 0x3f800000;
  (**(code **)(*DAT_007f1000 + 0x94))(DAT_007f1000,0x100,&local_70);
  FUN_005831e0(puVar4,0);
  uStack_34 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_3c;
  return;
}

