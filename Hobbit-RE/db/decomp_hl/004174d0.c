
void __thiscall FUN_004174d0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_0041a060(param_2);
  puVar2 = (undefined4 *)(param_1 + 0x2ac);
  iVar1 = 4;
  do {
    thunk_FUN_0063dbd0(*puVar2,0x20);
    puVar2 = puVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  thunk_FUN_0063dbd0(*(undefined4 *)(param_1 + 700),0x20);
  thunk_FUN_0063dbd0(*(undefined4 *)(param_1 + 0x2c0),0x20);
  thunk_FUN_0063dbd0(*(undefined4 *)(param_1 + 0x2c4),0x20);
  FUN_0063d930(*(undefined4 *)(param_1 + 0x3f8));
  FUN_0063d930(*(undefined4 *)(param_1 + 0x3fc));
  FUN_0063d930(*(undefined4 *)(param_1 + 0x400));
  FUN_0063d930(*(undefined4 *)(param_1 + 0x424));
  FUN_0063d930(*(undefined4 *)(param_1 + 0x428));
  FUN_0063d930(*(undefined4 *)(param_1 + 0x42c));
  FUN_0063d930(*(undefined4 *)(param_1 + 0x430));
  FUN_0063d930(*(undefined4 *)(param_1 + 0x2a8));
  FUN_0063d930(*(undefined4 *)(param_1 + 0x4a0));
  FUN_0063d930(*(undefined4 *)(param_1 + 0x4a4));
  FUN_0063cee0(*(undefined4 *)(param_1 + 0x438));
  puVar2 = (undefined4 *)(param_1 + 0x4b0);
  iVar1 = 2;
  do {
    FUN_0063cee0(puVar2[-6]);
    thunk_FUN_0063dbd0(*puVar2,0x20);
    puVar2 = puVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

