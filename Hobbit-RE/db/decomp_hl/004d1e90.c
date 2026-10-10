
void __fastcall FUN_004d1e90(int param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  iVar3 = 0;
  if (*(int *)(param_1 + 0xb8) != 0) {
    FUN_006bf840(*(int *)(param_1 + 0xb8));
    *(undefined4 *)(param_1 + 0xb8) = 0;
  }
  if (*(ushort *)(param_1 + 0x124) != 0) {
    pvVar1 = operator_new((uint)*(ushort *)(param_1 + 0x124) << 2);
    *(void **)(param_1 + 0xb8) = pvVar1;
    if (*(short *)(param_1 + 0x124) != 0) {
      while (iVar2 = FUN_004d1d10(iVar3,local_c,local_18,*(int *)(param_1 + 0xb8) + iVar3 * 4),
            iVar2 != 0) {
        iVar3 = iVar3 + 1;
        if ((int)(uint)*(ushort *)(param_1 + 0x124) <= iVar3) {
          return;
        }
      }
      FUN_0064e7d0(s_Could_not_get_vertex_position__0072d7d0);
    }
  }
  return;
}

