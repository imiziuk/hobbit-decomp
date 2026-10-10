
void __fastcall FUN_006823f0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_006f9e3c;
  if ((HGDIOBJ)param_1[2] != (HGDIOBJ)0x0) {
    DeleteObject((HGDIOBJ)param_1[2]);
  }
  if (param_1[0x12] != 0) {
    FUN_00688139();
  }
  piVar1 = (int *)param_1[0x13];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}

