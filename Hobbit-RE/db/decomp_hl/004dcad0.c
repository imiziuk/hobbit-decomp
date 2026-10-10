
void __fastcall FUN_004dcad0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x114) == 0) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0x10c));
    *(undefined4 *)(param_1 + 0x10c) = 0;
    *(undefined4 *)(param_1 + 0x110) = 0;
  }
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  *(uint *)(param_1 + 0x120) = *(uint *)(param_1 + 0x120) & 0xfff99129 | 0x1029;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  if (*(int *)(param_1 + 0x16c) == 0) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0x164));
    *(undefined4 *)(param_1 + 0x164) = 0;
    *(undefined4 *)(param_1 + 0x168) = 0;
  }
  *(undefined4 *)(param_1 + 0x160) = 0;
  if (*(int *)(param_1 + 0x1a4) == 0) {
    iVar1 = *(int *)(param_1 + 0x19c);
    if (iVar1 != 0) {
      FUN_006c026a(iVar1,0x1c,*(undefined4 *)(iVar1 + -4),FUN_005c8440);
      FUN_006bf840(iVar1 + -4);
    }
    *(undefined4 *)(param_1 + 0x19c) = 0;
    *(undefined4 *)(param_1 + 0x1a0) = 0;
  }
  *(undefined4 *)(param_1 + 0x198) = 0;
  if (*(int *)(param_1 + 0x144) == 0) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0x13c));
    *(undefined4 *)(param_1 + 0x13c) = 0;
    *(undefined4 *)(param_1 + 0x140) = 0;
  }
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 0x1ac) = 0;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  *(byte *)(param_1 + 0x7f) = *(byte *)(param_1 + 0x7f) | 1;
  *(undefined4 *)(param_1 + 0x128) = 0xffffffff;
  *(uint *)(param_1 + 0x120) = *(uint *)(param_1 + 0x120) & 0xfffefeff | 0x8000;
  return;
}

