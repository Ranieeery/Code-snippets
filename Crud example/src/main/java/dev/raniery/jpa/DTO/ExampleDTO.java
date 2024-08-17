package dev.raniery.jpa.DTO;

import dev.raniery.jpa.entity.Example;
import lombok.AllArgsConstructor;
import lombok.Getter;
import lombok.NoArgsConstructor;
import lombok.Setter;

import java.io.Serial;

@Getter
@Setter
@NoArgsConstructor
@AllArgsConstructor
public class ExampleDTO implements java.io.Serializable {
    @Serial
    private static final long serialVersionUID = 1L;

    private Long id;
    private String name;

    public ExampleDTO(Example entity) {
        this.id = entity.getId();
        this.name = entity.getName();
    }

}
