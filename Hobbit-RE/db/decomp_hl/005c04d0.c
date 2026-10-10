
void __thiscall FUN_005c04d0(int param_1,undefined4 param_2,byte param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = FUN_00648040(param_2,0x5f);
  if (iVar2 != 0) {
    iVar3 = FUN_00647e40(iVar2,s__lod3_00745c80);
    if (iVar3 == 0) {
      uVar4 = 1 << (param_3 & 0x1f);
      cVar1 = *(char *)(param_1 + 0x28);
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | uVar4;
      *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) | (int)uVar4 >> 0x1f;
      if (cVar1 < '\x04') {
        *(undefined1 *)(param_1 + 0x28) = 3;
        return;
      }
      goto LAB_005c05f4;
    }
    iVar3 = FUN_00647e40(iVar2,s__lod2_00745c78);
    if (iVar3 == 0) {
      uVar4 = 1 << (param_3 & 0x1f);
      cVar1 = *(char *)(param_1 + 0x28);
      *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | uVar4;
      *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | (int)uVar4 >> 0x1f;
      if (cVar1 < '\x03') {
        *(undefined1 *)(param_1 + 0x28) = 2;
        return;
      }
      goto LAB_005c05f4;
    }
    iVar2 = FUN_00647e40(iVar2,s__lod1_00745c70);
    if (iVar2 == 0) {
      uVar4 = 1 << (param_3 & 0x1f);
      cVar1 = *(char *)(param_1 + 0x28);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar4;
      *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | (int)uVar4 >> 0x1f;
      if (cVar1 < '\x02') {
        *(undefined1 *)(param_1 + 0x28) = 1;
        return;
      }
      goto LAB_005c05f4;
    }
  }
  uVar4 = 1 << (param_3 & 0x1f);
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | uVar4;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | (int)uVar4 >> 0x1f;
  if ('\0' < *(char *)(param_1 + 0x28)) {
    *(char *)(param_1 + 0x28) = *(char *)(param_1 + 0x28);
    return;
  }
  cVar1 = '\0';
LAB_005c05f4:
  *(char *)(param_1 + 0x28) = cVar1;
  return;
}

