
void __thiscall FUN_00424770(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = param_2;
  puVar3 = param_1;
  for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0x80] = param_2[0x80];
  param_1[0x81] = param_2[0x81];
  param_1[0x82] = param_2[0x82];
  param_1[0x83] = param_2[0x83];
  param_1[0x84] = param_2[0x84];
  param_1[0x85] = param_2[0x85];
  *(undefined1 *)((int)param_1 + 0x21b) = *(undefined1 *)((int)param_2 + 0x21b);
  *(undefined1 *)((int)param_1 + 0x21a) = *(undefined1 *)((int)param_2 + 0x21a);
  *(undefined1 *)((int)param_1 + 0x219) = *(undefined1 *)((int)param_2 + 0x219);
  *(undefined1 *)(param_1 + 0x86) = *(undefined1 *)(param_2 + 0x86);
  param_1[0x87] = param_2[0x87];
  param_1[0x88] = param_2[0x88];
  param_1[0x89] = param_2[0x89];
  param_1[0x8a] = param_2[0x8a];
  param_1[0x8b] = param_2[0x8b];
  param_1[0x8c] = param_2[0x8c];
  param_1[0x8e] = param_2[0x8e];
  param_1[0x8f] = param_2[0x8f];
  param_1[0x90] = param_2[0x90];
  param_1[0x91] = param_2[0x91];
  param_1[0x92] = param_2[0x92];
  param_1[0x93] = param_2[0x93];
  return;
}

