
void FUN_0068e091(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,0,0x5c);
  *(undefined4 **)(param_1 + 400) = puVar1;
  *puVar1 = FUN_0068e067;
  *(undefined1 **)(*(int *)(param_1 + 400) + 4) = &LAB_0068dd06;
  *(code **)(*(int *)(param_1 + 400) + 8) = FUN_0068defa;
  *(code **)(*(int *)(param_1 + 400) + 0xc) = FUN_0068dafb;
  iVar2 = 0x10;
  do {
    *(code **)(iVar2 + *(int *)(param_1 + 400)) = FUN_0068dafb;
    iVar2 = iVar2 + 4;
  } while (iVar2 < 0x50);
  *(code **)(*(int *)(param_1 + 400) + 0x10) = FUN_0068d031;
  *(code **)(*(int *)(param_1 + 400) + 0x48) = FUN_0068d26d;
  FUN_0068e067(param_1);
  return;
}

