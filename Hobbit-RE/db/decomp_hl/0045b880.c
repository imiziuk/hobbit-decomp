
void __fastcall FUN_0045b880(int *param_1)

{
  if ((*(byte *)((int)param_1 + 0x126) & 1) == 0) {
    if ((*(byte *)((int)param_1 + 0x15b) & 0x40) != 0) {
      (**(code **)(*param_1 + 0x9c))(0);
    }
    FUN_004c1960();
    return;
  }
  return;
}

