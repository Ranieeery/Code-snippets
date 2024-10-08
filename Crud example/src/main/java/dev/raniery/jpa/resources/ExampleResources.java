package dev.raniery.jpa.resources;

import dev.raniery.jpa.DTO.ExampleDTO;
import dev.raniery.jpa.services.ExampleServices;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import java.util.List;

@RestController
@RequestMapping(value = "/example")
public class ExampleResources {

    private final ExampleServices services;

    public ExampleResources(ExampleServices services) {
        this.services = services;
    }

    @GetMapping
    public ResponseEntity<List<ExampleDTO>> findAll() {
        List<ExampleDTO> list = services.findAll();
        return ResponseEntity.ok().body(list);
    }

}
