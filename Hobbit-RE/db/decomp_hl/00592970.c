
void __thiscall FUN_00592970(int param_1,int param_2)

{
  if ((*(int *)(param_1 + 0x158) != 0) &&
     (((byte)*(undefined4 *)(*(int *)(param_1 + 0x158) + 0x78) & 1) == 1)) {
    FUN_00592920();
    FUN_005aa7d0(0);
  }
  if ((param_2 != 0) && (((byte)*(undefined4 *)(param_2 + 0x78) & 1) == 1)) {
    FUN_00592920();
    FUN_005aa7d0();
    return;
  }
  return;
}

