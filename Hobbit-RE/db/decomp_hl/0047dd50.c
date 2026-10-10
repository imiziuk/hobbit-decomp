
void __fastcall FUN_0047dd50(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  FUN_0064e870(6,s_CINEMA__Starting_animation__s_00728570,*(undefined4 *)(param_1 + 0x28));
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfd;
  uVar6 = FUN_00473320();
  iVar2 = FUN_004021c0(uVar6);
  if (iVar2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x20);
    FUN_00473ce0(puVar1);
    iVar2 = FUN_00473330(puVar1);
    if (iVar2 == 0) {
      piVar3 = (int *)FUN_004021c0(*puVar1,*(undefined4 *)(param_1 + 0x24));
      iVar2 = FUN_00472e20();
      (**(code **)(*piVar3 + 0xf4))(iVar2 != 0,1);
      pcVar4 = s_Cinematic_007272dc;
      if (iVar2 == 0) {
        pcVar4 = s_Normal_00728568;
      }
      uVar5 = (**(code **)(*piVar3 + 0x4c))(pcVar4);
      FUN_0064e870(6,s__s_entering__s_conversation_mode_00728544,uVar5);
    }
  }
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 2;
  iVar2 = FUN_0047f500();
  if (iVar2 != 0) {
    FUN_00549470(param_1 + 0x54);
    uVar5 = FUN_0053cc70(*(undefined4 *)(param_1 + 0x28));
    *(undefined4 *)(param_1 + 0x68) = uVar5;
    FUN_00549580(param_1 + 0x54);
  }
  FUN_0047dac0((undefined4 *)(param_1 + 0x28));
  return;
}

