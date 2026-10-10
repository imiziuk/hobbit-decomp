
void __fastcall FUN_0040aef0(int param_1)

{
  if (*(int *)(param_1 + 8) == 2) {
    if (*(int *)(param_1 + 0x10) == 0) goto LAB_0040af2d;
    FUN_00659600(s_MetalSteam_0071e044,1);
    FUN_0040e320();
  }
  if ((*(int *)(param_1 + 0x10) != 0) && (*(int *)(param_1 + 8) == 2)) {
    *(undefined4 *)(param_1 + 8) = 3;
  }
LAB_0040af2d:
  FUN_0040b050();
  return;
}

