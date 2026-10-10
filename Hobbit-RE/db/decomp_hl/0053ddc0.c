
void __thiscall FUN_0053ddc0(int param_1,int param_2,int param_3)

{
  void *pvVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  int local_174;
  int local_170;
  undefined1 local_168 [348];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d91c1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_2 == 0) {
    ExceptionList = &local_c;
    if (param_3 != 0) {
      uVar6 = *(uint *)(param_1 + 0x50);
      ExceptionList = &local_c;
      *(uint *)(param_1 + 0x50) =
           (uVar6 & 0xff0000 | uVar6 >> 0x10) >> 8 | (uVar6 & 0xff00 | uVar6 << 0x10) << 8;
      uVar6 = *(uint *)(param_1 + 0x58);
      *(uint *)(param_1 + 0x58) =
           (uVar6 & 0xff0000 | uVar6 >> 0x10) >> 8 | (uVar6 & 0xff00 | uVar6 << 0x10) << 8;
      uVar6 = *(uint *)(param_1 + 0x60);
      *(uint *)(param_1 + 0x60) =
           (uVar6 & 0xff0000 | uVar6 >> 0x10) >> 8 | (uVar6 << 0x10 | uVar6 & 0xff00) << 8;
      uVar6 = *(uint *)(param_1 + 0x74);
      *(uint *)(param_1 + 0x74) =
           (uVar6 & 0xff0000 | uVar6 >> 0x10) >> 8 | (uVar6 << 0x10 | uVar6 & 0xff00) << 8;
      FUN_0053c910(param_1 + 0x40);
      FUN_0053c910(param_1 + 0x44);
      FUN_0053c910(param_1 + 0x48);
      FUN_0053c910(param_1 + 0x78);
      FUN_0053c910(param_1 + 0x80);
      FUN_0053c910(param_1 + 0x4c);
      FUN_0053c910(param_1 + 0x54);
      FUN_0053c910(param_1 + 0x5c);
      FUN_0053c910(param_1 + 100);
      FUN_0053c910(param_1 + 0x70);
    }
    iVar4 = *(int *)(param_1 + 0x7c);
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar4;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar4;
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + iVar4;
    *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + iVar4;
  }
  if (*(int *)(param_1 + 0x6c) == 0) {
    iVar4 = *(int *)(param_1 + 100);
    pvVar1 = operator_new(iVar4 * 0x15c);
    local_4 = 0;
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
    }
    else if (-1 < iVar4 + -1) {
      do {
        FUN_0053eba0();
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    local_4 = 0xffffffff;
    *(void **)(param_1 + 0x6c) = pvVar1;
    local_170 = 0;
    if (0 < *(int *)(param_1 + 100)) {
      local_174 = 0;
      do {
        puVar2 = (undefined4 *)FUN_0053efd0(local_168);
        puVar3 = (undefined4 *)(*(int *)(param_1 + 0x6c) + local_174);
        *puVar3 = *puVar2;
        iVar4 = (int)puVar2 - (int)puVar3;
        puVar7 = puVar3 + 1;
        do {
          *(undefined1 *)puVar7 = *(undefined1 *)(iVar4 + (int)puVar7);
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        } while ((undefined1 *)((int)puVar7 + (-4 - (int)puVar3)) < (undefined1 *)0x21);
        puVar8 = (undefined1 *)((int)puVar3 + 0x25);
        do {
          *puVar8 = puVar8[iVar4];
          puVar8 = puVar8 + 1;
        } while (puVar8 + (-0x25 - (int)puVar3) < (undefined1 *)0x21);
        puVar7 = puVar3 + 0x12;
        iVar5 = 5;
        do {
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar4);
          puVar7 = puVar7 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        puVar7 = puVar3 + 0x17;
        iVar5 = 8;
        do {
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar4);
          puVar7 = puVar7 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        puVar2 = puVar2 + 0x1f;
        puVar7 = puVar3 + 0x20;
        iVar5 = 2;
        do {
          puVar7[-1] = *puVar2;
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar4);
          puVar7[1] = puVar2[2];
          puVar2 = puVar2 + 3;
          puVar7 = puVar7 + 3;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        puVar7 = puVar3 + 0x25;
        iVar5 = 8;
        do {
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar4);
          puVar7 = puVar7 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        puVar7 = puVar3 + 0x2d;
        do {
          *(undefined1 *)puVar7 = *(undefined1 *)((int)puVar7 + iVar4);
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        } while ((undefined1 *)((-0xb4 - (int)puVar3) + (int)puVar7) < (undefined1 *)0xa5);
        local_170 = local_170 + 1;
        local_174 = local_174 + 0x15c;
      } while (local_170 < *(int *)(param_1 + 100));
    }
  }
  else {
    FUN_006bf840(*(int *)(param_1 + 0x6c));
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  if (param_3 != 0) {
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x4c)) {
      iVar5 = 0;
      do {
        FUN_0053c8f0(*(int *)(param_1 + 0x50) + iVar5);
        FUN_0053c8f0(*(int *)(param_1 + 0x50) + 2 + iVar5);
        FUN_0053c8f0(*(int *)(param_1 + 0x50) + 4 + iVar5);
        FUN_0053c9d0(*(int *)(param_1 + 0x50) + 0x28 + iVar5);
        FUN_0053c9d0(*(int *)(param_1 + 0x50) + 0x34 + iVar5);
        FUN_0053c9f0(*(int *)(param_1 + 0x50) + 0x40 + iVar5);
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 0x80;
      } while (iVar4 < *(int *)(param_1 + 0x4c));
    }
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x54)) {
      iVar5 = 0;
      do {
        FUN_0053c8f0(*(int *)(param_1 + 0x58) + 0x24 + iVar5);
        FUN_0053c8f0(*(int *)(param_1 + 0x58) + 0x26 + iVar5);
        FUN_0053c8f0(*(int *)(param_1 + 0x58) + 0x28 + iVar5);
        FUN_0053c8f0(*(int *)(param_1 + 0x58) + 0x2a + iVar5);
        FUN_0053c8f0(*(int *)(param_1 + 0x58) + 0x2c + iVar5);
        FUN_0053c8d0(*(int *)(param_1 + 0x58) + 0x30 + iVar5);
        FUN_0053c8d0(*(int *)(param_1 + 0x58) + 0x32 + iVar5);
        FUN_0053c8d0(*(int *)(param_1 + 0x58) + 0x34 + iVar5);
        FUN_0053c9d0(*(int *)(param_1 + 0x58) + 0x38 + iVar5);
        FUN_0053c8f0(*(int *)(param_1 + 0x58) + 0x44 + iVar5);
        FUN_0053c8f0(*(int *)(param_1 + 0x58) + 0x46 + iVar5);
        FUN_0053c8f0(*(int *)(param_1 + 0x58) + 0x48 + iVar5);
        FUN_0053c8f0(*(int *)(param_1 + 0x58) + 0x4a + iVar5);
        FUN_0053c8f0(*(int *)(param_1 + 0x58) + 0x4c + iVar5);
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 0x50;
      } while (iVar4 < *(int *)(param_1 + 0x54));
    }
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x5c)) {
      iVar5 = 0;
      do {
        FUN_0053c910(*(int *)(param_1 + 0x60) + 0x20 + iVar5);
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 0x24;
      } while (iVar4 < *(int *)(param_1 + 0x5c));
    }
    if ((*(int *)(param_1 + 0x6c) != 0) && (iVar4 = 0, 0 < *(int *)(param_1 + 100))) {
      do {
        FUN_0053ecc0();
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(param_1 + 100));
    }
    uVar6 = *(uint *)(param_1 + 0x68);
    *(uint *)(param_1 + 0x68) =
         (uVar6 & 0xff0000 | uVar6 >> 0x10) >> 8 | (uVar6 << 0x10 | uVar6 & 0xff00) << 8;
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x70)) {
      iVar5 = 0;
      do {
        FUN_0053c910(*(int *)(param_1 + 0x74) + 0xc + iVar5);
        FUN_0053c910(*(int *)(param_1 + 0x74) + 0x10 + iVar5);
        FUN_0053c910(*(int *)(param_1 + 0x74) + 0x14 + iVar5);
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 0x18;
      } while (iVar4 < *(int *)(param_1 + 0x70));
    }
  }
  if (param_2 != 0) {
    iVar4 = *(int *)(param_1 + 0x7c);
    uVar6 = *(int *)(param_1 + 0x50) - iVar4;
    *(uint *)(param_1 + 0x50) = uVar6;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) - iVar4;
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) - iVar4;
    *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) - iVar4;
    if (param_3 != 0) {
      *(uint *)(param_1 + 0x50) =
           (uVar6 & 0xff0000 | uVar6 >> 0x10) >> 8 | (uVar6 * 0x10000 | uVar6 & 0xff00) << 8;
      uVar6 = *(uint *)(param_1 + 0x58);
      *(uint *)(param_1 + 0x58) =
           (uVar6 & 0xff0000 | uVar6 >> 0x10) >> 8 | (uVar6 << 0x10 | uVar6 & 0xff00) << 8;
      uVar6 = *(uint *)(param_1 + 0x60);
      *(uint *)(param_1 + 0x60) =
           (uVar6 & 0xff0000 | uVar6 >> 0x10) >> 8 | (uVar6 << 0x10 | uVar6 & 0xff00) << 8;
      uVar6 = *(uint *)(param_1 + 0x74);
      *(uint *)(param_1 + 0x74) =
           (uVar6 & 0xff0000 | uVar6 >> 0x10) >> 8 | (uVar6 << 0x10 | uVar6 & 0xff00) << 8;
      FUN_0053c910(param_1 + 0x40);
      FUN_0053c910(param_1 + 0x44);
      FUN_0053c910(param_1 + 0x48);
      FUN_0053c910(param_1 + 0x78);
      FUN_0053c910(param_1 + 0x80);
      FUN_0053c910(param_1 + 0x4c);
      FUN_0053c910(param_1 + 0x54);
      FUN_0053c910(param_1 + 0x5c);
      FUN_0053c910(param_1 + 100);
      FUN_0053c910(param_1 + 0x70);
    }
  }
  ExceptionList = local_c;
  return;
}

