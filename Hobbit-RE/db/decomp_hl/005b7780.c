
void __fastcall thunk_FUN_005b7f00(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [12];
  int iStack_34;
  
  FUN_0065fce0(0);
  uVar2 = FUN_00672280();
  uVar2 = FUN_006722a0(uVar2);
  FUN_0064e040(auStack_40,uVar2);
  uStack_50 = 0;
  uStack_60 = 0;
  uStack_70 = 0;
  uStack_4c = 0;
  uStack_5c = 0;
  uStack_7c = 0;
  uStack_48 = 0;
  uStack_68 = 0;
  uStack_78 = 0;
  uStack_54 = 0;
  uStack_64 = 0;
  uStack_74 = 0;
  uStack_80 = 0x3f800000;
  uStack_6c = 0x3f800000;
  uStack_58 = 0x3f800000;
  uStack_44 = 0x3f800000;
  (**(code **)(*DAT_007f1000 + 0x94))(DAT_007f1000,0x100,&uStack_80);
  iVar1 = *DAT_007f1000;
  uVar2 = FUN_00672280();
  (**(code **)(iVar1 + 0x94))(DAT_007f1000,2,uVar2);
  iVar1 = *DAT_007f1000;
  uVar2 = FUN_006722a0();
  (**(code **)(iVar1 + 0x94))(DAT_007f1000,3,uVar2);
  (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x8f,1);
  if ((*(byte *)(param_1 + 0xe0) & 2) == 0) {
    (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,8,3);
  }
  else {
    (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,8,2);
  }
  FUN_00662ce0(*(undefined4 *)(*(int *)(param_1 + 0x140) + iStack_34 * 4),
               0 < *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x18));
  return;
}

